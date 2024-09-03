#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    int length = input.length();

    for (int i = 1; i < length; i += 2)
    {
        cout << input[i];
    }

    return 0;
}