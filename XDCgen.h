#include <iostream>
#include <fstream>
#include <sstream>
#include <queue>
#include <string>
#include "Pinmap.h"

using namespace std;

class XDCgen
{
public:
    XDCgen()
    {

    }
    
    ~XDCgen()
    {

    }

    void readFile(string fileName);

    void writeFile(string fileName);

    int state()
    {
        if (failBit)
        {
            cout << "Something went wrong. Exiting..." << endl;
            return 1;
        }
        else
        {
            cout << "Files have been written" << endl;
            return 0;
        }
    }

private:
    struct Constraint
    {
        string header;
        int pin;
        string packagePin;
        string signal;
        int index;
    };

    Pinmap Snickerdoodle;
    string set_property(string property, string value, string signal, int index);
    string get_ports(string signal, int index);
    void newConstraint(string signalName, int index, string header, int pin);
    string toString(Constraint info);
    bool failBit;
    queue<Constraint> ConstList;
};