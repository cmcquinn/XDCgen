#include "XDCgen.h"

using namespace std;

void XDCgen::newConstraint(string signalName, int index, string header, int pin)
{
    Constraint newConst;
    newConst.header = header;
    newConst.pin = pin;
    newConst.signal = signalName;
    newConst.index = index;
    newConst.packagePin = Snickerdoodle.getPackagePin(header, pin);

    // store the constraint in the FIFO queue
    ConstList.push(newConst);
}

string XDCgen::toString(Constraint info)
{
    stringstream commands;
    

    commands << "### " << info.header << "." << info.pin << endl;
    commands << set_property("PACKAGE_PIN", info.packagePin, info.signal, info.index) << endl;
    commands << set_property("IOSTANDARD", "LVCMOS33", info.signal, info.index) << endl;

    return commands.str();
}

void XDCgen::readFile(string fileName)
{
    ifstream infile;
    infile.open(fileName);

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

        int index;
        int pin;
    
        // extract comma-separated values
        // CSV format is signal,index,header,pin
        while(!infile.eof())
        {
            getline(infile, signalName, ',');
            getline(infile, indexString, ',');
            getline(infile, header, ',');
            getline(infile, pinString, '\n');

            index = stoi(indexString);
            pin = stoi(pinString);
    
            newConstraint(signalName, index, header, pin);
        }

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
    propertyCmd << "set_property " << property << "\t" << value;
    propertyCmd << "\t\t\t" << "[" << get_ports(signal, index) << "]";
    propertyCmd << endl;

    return propertyCmd.str();
}

string XDCgen::get_ports(string signal, int index)
{
    stringstream portCmd;
    
    // assemble get_ports command
    portCmd << "get_ports {" << signal << "[" << index << "]" << "}";

    return portCmd.str();
}