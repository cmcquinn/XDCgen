#include "XDCgen.h"
#include <iomanip>

using namespace std;

void XDCgen::newConstraint(string signalName, int index, string header, int pin, string note)
{
    Constraint newConst;
    newConst.header = header;
    newConst.pin = pin;
    newConst.signal = signalName;
    newConst.index = index;
    newConst.packagePin = Snickerdoodle.getPackagePin(header, pin);
    newConst.note = note;

    // store the constraint in the FIFO queue
    ConstList.push(newConst);
}

string XDCgen::toString(Constraint info)
{
    stringstream commands;
    

    commands << "### " << info.header << "." << info.pin;

    // print note, if there is one
    if (!info.note.empty())
    {
        commands << " (" << info.note << ")";
    }

    commands << endl;
    commands << set_property("PACKAGE_PIN", info.packagePin, info.signal, info.index) << endl;
    commands << set_property("IOSTANDARD", "LVCMOS33", info.signal, info.index) << endl;

    return commands.str();
}

void XDCgen::readFile(string fileName)
{
    ifstream infile;
    infile.open(fileName);
    int line = 1;

    if (!infile.is_open())
    {
        cout << "Error opening file " << fileName << endl;
        failBit = true;
    }
    else
    {
        cout << "Reading from " << fileName << endl;
        string signalName;
        string indexString;
        string header;
        string pinString;
        string note;
        string remainder;

        int index;
        int pin;
    
        // extract comma-separated values
        // CSV format is signal,index,header,pin,note
        do
        {
            // ignore lines starting with '#' and ',' to allow for comments and empty lines in the CSV
            if (infile.peek() == '#' || infile.peek() == ',')
            {
                // ignore until newline
                cout << "Ignoring line " << line << endl;
                infile.ignore(256, '\n');
                line++;
            }
            else
            {
                getline(infile, signalName, ',');
                getline(infile, indexString, ',');
                getline(infile, header, ',');
    
                // handle optional note at the end of the line
                // read the rest of the line into a string
                getline(infile, remainder, '\n');
    
                // if the string contains a comma, the line includes a note
                if (remainder.find(',') != string::npos)
                {
                    // put the pin number and note back into a stringstream
                    istringstream iss (remainder);
    
                    // extract the pin number and note separately
                    getline(iss, pinString, ',');
                    getline(iss, note, '\n');
                }
                // no note on this line
                else
                {
                    pinString = remainder;
                    note = "";
                }
    
                //cout << "indexString: " << indexString << endl;
                //cout << "pinString: " << pinString << endl;
    
                index = stoi(indexString);
                pin = stoi(pinString);
        
                newConstraint(signalName, index, header, pin, note);
                line++;
            }
        } while(!infile.eof());

        // the last constraint is getting read twice
        // this is a shim to fix that until I figure out a better fix
        ConstList.pop();

        infile.close();
    }
}

void XDCgen::writeFile(string fileName)
{
    ofstream outfile;
    outfile.open(fileName);

    if (!outfile.is_open())
    {
        cout << "Error writing to file " << fileName << endl;
        failBit = true;
    }
    else if(failBit)
    {
        cout << "Unable to write file because of previous errors" << endl;
    }
    else
    {
        // format all constraints and write them to a file
        while (!ConstList.empty())
        {
            outfile << toString(ConstList.front()) << endl;
            ConstList.pop();
        }

        outfile.close();
    }
}

string XDCgen::set_property(string property, string value, string signal, int index)
{
    stringstream propertyCmd;

    // assemble set_property command
    propertyCmd << setw(20) << left << "set_property ";
    propertyCmd << setw(15) << left << property;
    propertyCmd << setw(10) << left << value;
    propertyCmd << "[" << get_ports(signal, index) << "]";
    //propertyCmd << endl;

    return propertyCmd.str();
}

string XDCgen::get_ports(string signal, int index)
{
    stringstream portCmd;
    
    // assemble get_ports command
    portCmd << "get_ports {" << signal << "[" << index << "]" << "}";

    return portCmd.str();
}