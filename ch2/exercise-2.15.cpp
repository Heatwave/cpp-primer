#include <iostream>

int main15()
{
    int ival = 1.01;    // valid but get warning
    //int &rval1 = 1.01;    // invalid
    int &rval2 = ival;
    //int &rval3;   // invalid

    return 0;
}

