#include <iostream>
#include "XDCgen.h"

using namespace std;

// Usage: xdcgen input.csv output.xdc
int main(int argc, char *argv[])
{
    XDCgen ConstraintManager;

    if (argc != 3)
    {
        cout << "Usage: " << argv[0] << "<input>.csv <output>.xdc" << endl;
        return 1;
    }
    else
    {
        ConstraintManager.readFile(argv[1]);
        ConstraintManager.writeFile(argv[2], argv[1]);
        return ConstraintManager.state();
    }
}