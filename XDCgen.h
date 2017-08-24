#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
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

private:
    Pinmap Snickerdoodle;
    string set_property(string property, string value, string signal, int index);
    string get_ports(string signal, int index);
    void newConstraint(string signalName, int index, string header, int pin);
    string toString(Constraint info);

    struct Constraint
    {
        string header;
        int pin;
        string packagePin;
        string signal;
        int index;
    };

    queue<Constraint> ConstList;
}