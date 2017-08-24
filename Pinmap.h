#include <map>
#include <string>

using namespace std;

class Pinmap
{
public:
    Pinmap()
    {
        // initialize the boardPin to packagePin map

        // JA1 connector
        IOmap[make_pair(JA1,04)] = G14;
        IOmap[make_pair(JA1,05)] = E18;
        IOmap[make_pair(JA1,06)] = D20;
        IOmap[make_pair(JA1,07)] = E19;
        IOmap[make_pair(JA1,08)] = D19;
        IOmap[make_pair(JA1,11)] = F16;
        IOmap[make_pair(JA1,12)] = B20;
        IOmap[make_pair(JA1,13)] = F17;
        IOmap[make_pair(JA1,14)] = C20;
        IOmap[make_pair(JA1,17)] = E17;
        IOmap[make_pair(JA1,18)] = A20;
        IOmap[make_pair(JA1,19)] = D18;
        IOmap[make_pair(JA1,20)] = B19;
        IOmap[make_pair(JA1,23)] = F19;
        IOmap[make_pair(JA1,24)] = G20;
        IOmap[make_pair(JA1,25)] = F20;
        IOmap[make_pair(JA1,26)] = G19;
        IOmap[make_pair(JA1,29)] = J20;
        IOmap[make_pair(JA1,30)] = G18;
        IOmap[make_pair(JA1,31)] = H20;
        IOmap[make_pair(JA1,32)] = G17;
        IOmap[make_pair(JA1,35)] = J18;
        IOmap[make_pair(JA1,36)] = H17;
        IOmap[make_pair(JA1,37)] = H18;
        IOmap[make_pair(JA1,38)] = H16;
        
        //JA2 Connector
        IOmap[make_pair(JA2,04)] = J15;
        IOmap[make_pair(JA2,05)] = L14;
        IOmap[make_pair(JA2,06)] = J16;
        IOmap[make_pair(JA2,07)] = L15;
        IOmap[make_pair(JA2,08)] = K16;
        IOmap[make_pair(JA2,11)] = M14;
        IOmap[make_pair(JA2,12)] = G15;
        IOmap[make_pair(JA2,13)] = M15;
        IOmap[make_pair(JA2,14)] = H15;
        IOmap[make_pair(JA2,17)] = N15;
        IOmap[make_pair(JA2,18)] = J14;
        IOmap[make_pair(JA2,19)] = N16;
        IOmap[make_pair(JA2,20)] = K14;
        IOmap[make_pair(JA2,23)] = L19;
        IOmap[make_pair(JA2,24)] = J19;
        IOmap[make_pair(JA2,25)] = L20;
        IOmap[make_pair(JA2,26)] = K19;
        IOmap[make_pair(JA2,29)] = M17;
        IOmap[make_pair(JA2,30)] = M20;
        IOmap[make_pair(JA2,31)] = M18;
        IOmap[make_pair(JA2,32)] = M19;
        IOmap[make_pair(JA2,35)] = L16;
        IOmap[make_pair(JA2,36)] = K18;
        IOmap[make_pair(JA2,37)] = L17;
        IOmap[make_pair(JA2,38)] = K17;
        
        // JB1 Connector
        IOmap[make_pair(JB1,04)] = T19;
        IOmap[make_pair(JB1,05)] = T11;
        IOmap[make_pair(JB1,06)] = U12;
        IOmap[make_pair(JB1,07)] = T10;
        IOmap[make_pair(JB1,08)] = T12;
        IOmap[make_pair(JB1,11)] = P14;
        IOmap[make_pair(JB1,12)] = W13;
        IOmap[make_pair(JB1,13)] = R14;
        IOmap[make_pair(JB1,14)] = V12;
        IOmap[make_pair(JB1,17)] = U13;
        IOmap[make_pair(JB1,18)] = T15;
        IOmap[make_pair(JB1,19)] = V13;
        IOmap[make_pair(JB1,20)] = T14;
        IOmap[make_pair(JB1,23)] = T16;
        IOmap[make_pair(JB1,24)] = Y17;
        IOmap[make_pair(JB1,25)] = U17;
        IOmap[make_pair(JB1,26)] = Y16;
        IOmap[make_pair(JB1,29)] = W14;
        IOmap[make_pair(JB1,30)] = W15;
        IOmap[make_pair(JB1,31)] = Y14;
        IOmap[make_pair(JB1,32)] = V15;
        IOmap[make_pair(JB1,35)] = U14;
        IOmap[make_pair(JB1,36)] = U19;
        IOmap[make_pair(JB1,37)] = U15;
        IOmap[make_pair(JB1,38)] = U18;
        
        // JB2 Connector
        IOmap[make_pair(JB2,04)] = R19;
        IOmap[make_pair(JB2,05)] = N17;
        IOmap[make_pair(JB2,06)] = P16;
        IOmap[make_pair(JB2,07)] = P18;
        IOmap[make_pair(JB2,08)] = P15;
        IOmap[make_pair(JB2,11)] = T17;
        IOmap[make_pair(JB2,12)] = R17;
        IOmap[make_pair(JB2,13)] = R18;
        IOmap[make_pair(JB2,14)] = R16;
        IOmap[make_pair(JB2,17)] = V17;
        IOmap[make_pair(JB2,18)] = W19;
        IOmap[make_pair(JB2,19)] = V18;
        IOmap[make_pair(JB2,20)] = W18;
        IOmap[make_pair(JB2,23)] = T20;
        IOmap[make_pair(JB2,24)] = W16;
        IOmap[make_pair(JB2,25)] = U20;
        IOmap[make_pair(JB2,26)] = V16;
        IOmap[make_pair(JB2,29)] = V20;
        IOmap[make_pair(JB2,30)] = Y19;
        IOmap[make_pair(JB2,31)] = W20;
        IOmap[make_pair(JB2,32)] = Y18;
        IOmap[make_pair(JB2,35)] = N20;
        IOmap[make_pair(JB2,36)] = P19;
        IOmap[make_pair(JB2,37)] = P20;
        IOmap[make_pair(JB2,38)] = N18;
        
        // JC1 Connector
        IOmap[make_pair(JC1,04)] = V5;
        IOmap[make_pair(JC1,05)] = U7;
        IOmap[make_pair(JC1,06)] = U10;
        IOmap[make_pair(JC1,07)] = V7;
        IOmap[make_pair(JC1,08)] = T9;
        IOmap[make_pair(JC1,11)] = T5;
        IOmap[make_pair(JC1,12)] = Y13;
        IOmap[make_pair(JC1,13)] = U5;
        IOmap[make_pair(JC1,14)] = Y12;
        IOmap[make_pair(JC1,17)] = V11;
        IOmap[make_pair(JC1,18)] = W6;
        IOmap[make_pair(JC1,19)] = V10;
        IOmap[make_pair(JC1,20)] = V6;
        IOmap[make_pair(JC1,23)] = V8;
        IOmap[make_pair(JC1,24)] = Y11;
        IOmap[make_pair(JC1,25)] = W8;
        IOmap[make_pair(JC1,26)] = W11;
        IOmap[make_pair(JC1,29)] = U9;
        IOmap[make_pair(JC1,30)] = W9;
        IOmap[make_pair(JC1,31)] = U8;
        IOmap[make_pair(JC1,32)] = W10;
        IOmap[make_pair(JC1,35)] = Y9;
        IOmap[make_pair(JC1,36)] = Y6;
        IOmap[make_pair(JC1,37)] = Y8;
        IOmap[make_pair(JC1,38)] = Y7;
    }
    
    ~Pinmap()
    {

    }


    string getPackagePin(string header, int pin)
    {
        return IOmap[make_pair(header, pin)];
    }

private:
    map <pair <string header, int pin> boardPin, string packagePin> IOmap;
}