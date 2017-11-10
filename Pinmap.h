#include <map>
#include <string>

using namespace std;

class Pinmap
{
public:
    Pinmap()
    {
        // initialize the boardPin to packagePin map

        // "JA1" connector
        IOmap[boardPin("JA1", 4)] = "G14";
        IOmap[boardPin("JA1", 5)] = "E18";
        IOmap[boardPin("JA1", 6)] = "D20";
        IOmap[boardPin("JA1", 7)] = "E19";
        IOmap[boardPin("JA1", 8)] = "D19";
        IOmap[boardPin("JA1",11)] = "F16";
        IOmap[boardPin("JA1",12)] = "B20";
        IOmap[boardPin("JA1",13)] = "F17";
        IOmap[boardPin("JA1",14)] = "C20";
        IOmap[boardPin("JA1",17)] = "E17";
        IOmap[boardPin("JA1",18)] = "A20";
        IOmap[boardPin("JA1",19)] = "D18";
        IOmap[boardPin("JA1",20)] = "B19";
        IOmap[boardPin("JA1",23)] = "F19";
        IOmap[boardPin("JA1",24)] = "G20";
        IOmap[boardPin("JA1",25)] = "F20";
        IOmap[boardPin("JA1",26)] = "G19";
        IOmap[boardPin("JA1",29)] = "J20";
        IOmap[boardPin("JA1",30)] = "G18";
        IOmap[boardPin("JA1",31)] = "H20";
        IOmap[boardPin("JA1",32)] = "G17";
        IOmap[boardPin("JA1",35)] = "J18";
        IOmap[boardPin("JA1",36)] = "H17";
        IOmap[boardPin("JA1",37)] = "H18";
        IOmap[boardPin("JA1",38)] = "H16";
        
        //"JA2" Connector
        IOmap[boardPin("JA2", 4)] = "J15";
        IOmap[boardPin("JA2", 5)] = "L14";
        IOmap[boardPin("JA2", 6)] = "J16";
        IOmap[boardPin("JA2", 7)] = "L15";
        IOmap[boardPin("JA2", 8)] = "K16";
        IOmap[boardPin("JA2",11)] = "M14";
        IOmap[boardPin("JA2",12)] = "G15";
        IOmap[boardPin("JA2",13)] = "M15";
        IOmap[boardPin("JA2",14)] = "H15";
        IOmap[boardPin("JA2",17)] = "N15";
        IOmap[boardPin("JA2",18)] = "J14";
        IOmap[boardPin("JA2",19)] = "N16";
        IOmap[boardPin("JA2",20)] = "K14";
        IOmap[boardPin("JA2",23)] = "L19";
        IOmap[boardPin("JA2",24)] = "J19";
        IOmap[boardPin("JA2",25)] = "L20";
        IOmap[boardPin("JA2",26)] = "K19";
        IOmap[boardPin("JA2",29)] = "M17";
        IOmap[boardPin("JA2",30)] = "M20";
        IOmap[boardPin("JA2",31)] = "M18";
        IOmap[boardPin("JA2",32)] = "M19";
        IOmap[boardPin("JA2",35)] = "L16";
        IOmap[boardPin("JA2",36)] = "K18";
        IOmap[boardPin("JA2",37)] = "L17";
        IOmap[boardPin("JA2",38)] = "K17";
        
        // "JB1" Connector
        IOmap[boardPin("JB1", 4)] = "T19";
        IOmap[boardPin("JB1", 5)] = "T11";
        IOmap[boardPin("JB1", 6)] = "U12";
        IOmap[boardPin("JB1", 7)] = "T10";
        IOmap[boardPin("JB1", 8)] = "T12";
        IOmap[boardPin("JB1",11)] = "P14";
        IOmap[boardPin("JB1",12)] = "W13";
        IOmap[boardPin("JB1",13)] = "R14";
        IOmap[boardPin("JB1",14)] = "V12";
        IOmap[boardPin("JB1",17)] = "U13";
        IOmap[boardPin("JB1",18)] = "T15";
        IOmap[boardPin("JB1",19)] = "V13";
        IOmap[boardPin("JB1",20)] = "T14";
        IOmap[boardPin("JB1",23)] = "T16";
        IOmap[boardPin("JB1",24)] = "Y17";
        IOmap[boardPin("JB1",25)] = "U17";
        IOmap[boardPin("JB1",26)] = "Y16";
        IOmap[boardPin("JB1",29)] = "W14";
        IOmap[boardPin("JB1",30)] = "W15";
        IOmap[boardPin("JB1",31)] = "Y14";
        IOmap[boardPin("JB1",32)] = "V15";
        IOmap[boardPin("JB1",35)] = "U14";
        IOmap[boardPin("JB1",36)] = "U19";
        IOmap[boardPin("JB1",37)] = "U15";
        IOmap[boardPin("JB1",38)] = "U18";
        
        // "JB2" Connector
        IOmap[boardPin("JB2", 4)] = "R19";
        IOmap[boardPin("JB2", 5)] = "N17";
        IOmap[boardPin("JB2", 6)] = "P16";
        IOmap[boardPin("JB2", 7)] = "P18";
        IOmap[boardPin("JB2", 8)] = "P15";
        IOmap[boardPin("JB2",11)] = "T17";
        IOmap[boardPin("JB2",12)] = "R17";
        IOmap[boardPin("JB2",13)] = "R18";
        IOmap[boardPin("JB2",14)] = "R16";
        IOmap[boardPin("JB2",17)] = "V17";
        IOmap[boardPin("JB2",18)] = "W19";
        IOmap[boardPin("JB2",19)] = "V18";
        IOmap[boardPin("JB2",20)] = "W18";
        IOmap[boardPin("JB2",23)] = "T20";
        IOmap[boardPin("JB2",24)] = "W16";
        IOmap[boardPin("JB2",25)] = "U20";
        IOmap[boardPin("JB2",26)] = "V16";
        IOmap[boardPin("JB2",29)] = "V20";
        IOmap[boardPin("JB2",30)] = "Y19";
        IOmap[boardPin("JB2",31)] = "W20";
        IOmap[boardPin("JB2",32)] = "Y18";
        IOmap[boardPin("JB2",35)] = "N20";
        IOmap[boardPin("JB2",36)] = "P19";
        IOmap[boardPin("JB2",37)] = "P20";
        IOmap[boardPin("JB2",38)] = "N18";
        
        // "JC1" Connector
        IOmap[boardPin("JC1", 4)] = "V5";
        IOmap[boardPin("JC1", 5)] = "U7";
        IOmap[boardPin("JC1", 6)] = "U10";
        IOmap[boardPin("JC1", 7)] = "V7";
        IOmap[boardPin("JC1", 8)] = "T9";
        IOmap[boardPin("JC1",11)] = "T5";
        IOmap[boardPin("JC1",12)] = "Y13";
        IOmap[boardPin("JC1",13)] = "U5";
        IOmap[boardPin("JC1",14)] = "Y12";
        IOmap[boardPin("JC1",17)] = "V11";
        IOmap[boardPin("JC1",18)] = "W6";
        IOmap[boardPin("JC1",19)] = "V10";
        IOmap[boardPin("JC1",20)] = "V6";
        IOmap[boardPin("JC1",23)] = "V8";
        IOmap[boardPin("JC1",24)] = "Y11";
        IOmap[boardPin("JC1",25)] = "W8";
        IOmap[boardPin("JC1",26)] = "W11";
        IOmap[boardPin("JC1",29)] = "U9";
        IOmap[boardPin("JC1",30)] = "W9";
        IOmap[boardPin("JC1",31)] = "U8";
        IOmap[boardPin("JC1",32)] = "W10";
        IOmap[boardPin("JC1",35)] = "Y9";
        IOmap[boardPin("JC1",36)] = "Y6";
        IOmap[boardPin("JC1",37)] = "Y8";
        IOmap[boardPin("JC1",38)] = "Y7";

        // initialize usage map
        for (map<boardPin, string>::iterator it = IOmap.begin(); it != IOmap.end(); ++it)
        {
            UsageMap[it->first] = false;
        }
    }
    
    ~Pinmap()
    {

    }

    bool isConstrained(string header, int pin)
    {
        return IOmap[boardPin(header, pin)] == "1";
    }

    string getPackagePin(string header, int pin)
    {
        // get the package pin
        string packagePin = IOmap[boardPin(header, pin)];

        // set the value for this pin to 1, so we know that it has been used
        IOmap[boardPin(header, pin)] = "1";

        // return the package pin
        return packagePin;
    }

private:
    
    struct boardPin
    {
        string header;
        int pin;
        bool isUsed = false;

        // constructor with initializer list
        boardPin(string headerName, int pinNumber) :
            header(headerName), pin(pinNumber) {}

        // overload of operator< for boardPin
        bool operator<(const boardPin& b) const
        {
            if (this->header == b.header)
            {
                return this->pin < b.pin;
            }
            else
            {
                return this->header < b.header;
            }
        }
    };

    map <boardPin, string> IOmap;
    map <boardPin, bool> UsageMap;
};