#include <iostream>
using namespace std;

int main() 
{
    int input, sum = 0, all_sum = 0;

    cout << "Enter a digit between 0 and 1000000: ";
    cin >> input;

    if (input < 0 || input > 1000000) return 0;

    // Calculate the sum of all digits
    while (input > 0) 
    {
        sum += input % 10;
        input /= 10;
    }

    // Calculate the sum of digits until there's only one digit
    all_sum = sum;
    while (all_sum >= 10) 
    {
        int temp_sum = 0;

        while (all_sum > 0) 
        {
            temp_sum += all_sum % 10;
            all_sum /= 10;
        }

        all_sum = temp_sum;
    }

    cout << "The sum of all digits is " << sum << endl;
    cout << "The sum of all digits until there's only one is " << all_sum << endl;

    return 0;
}
