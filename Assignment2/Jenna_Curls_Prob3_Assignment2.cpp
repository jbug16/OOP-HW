#include <iostream>
using namespace std;

int evenCount(int value)
{
    // stop recursion when value is less than 0
    if (value == 0) return 0;

    // get last digit
    int lastDigit = abs(value % 10);

    // check if digit is even (if divisible by 2, then add 1, else add 0)
    int isEven = (lastDigit % 2 == 0) ? 1 : 0;

    // start recursion, check remaining digits
    return isEven + evenCount(value / 10);
}

int main()
{
    int input;

    cout << "Enter an integer: ";
    cin >> input;

    if (input == 0) 
    {
        cout << "The number of even digits is 1" << endl;
    } 
    else 
    {
        cout << "The number of even digits is " << evenCount(input);
    }

    return 0;
}