#include <iostream>
using namespace std;

int main()
{
    long value1 = 200000, value2;
    
    // a)
    long* lPtr;

    // b)
    lPtr = &value1;

    // c)
    cout << *lPtr << endl;

    // d)
    value2 = *lPtr;

    // e)
    cout << value2 << endl;

    // f)
    cout << &value1 << endl;

    // g)
    cout << lPtr << endl;

    return 0;
}