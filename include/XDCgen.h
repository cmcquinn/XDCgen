#include "Pinmap.h"
#include <fstream>
#include <iostream>
#include <queue>
#include <sstream>
#include <string>

using namespace std;

class XDCgen {
public:
    XDCgen() {}

    ~XDCgen() {}

    void readFile(string fileName);

    void writeFile(string outfileName, string infileName);

    int state() {
        if (failBit) {
            cout << "Something went wrong. Exiting..." << endl;
            return 1;
        }
        else {
            cout << "Files have been written" << endl;
            return 0;
        }
    }

private:
    struct Constraint {
        string header;
        int pin;
        string packagePin;
        string signal;
        int index;
        string note;
    };

    Pinmap Snickerdoodle;
    string set_property(string property, string value, string signal, int index);
    string get_ports(string signal, int index);
    void newConstraint(string signalName, int index, string header, int pin, string note);
    string toString(Constraint info);
    bool failBit = false;
    queue<Constraint> ConstList;
};