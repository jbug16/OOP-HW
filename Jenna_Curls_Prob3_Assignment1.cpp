#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int num, quotient, remainder, square_root;

	cout << "Enter an integer number to see if it is divisible by 4 or not: ";
	cin >> num;

	if (num < 0)
	{
		cout << "The program doesn't accept negative numbers." << endl;
	}
	else if (num <= 100)
	{
    	quotient = num / 4;
    	remainder = num % 4;

		// Is divisible by 4?
		if (remainder == 0)
		{
			cout << "The given number (" << num << ") is divisible by 4." << endl << "Quotient: " << quotient << " Remainder: " << remainder; 
		}
		else
		{
			cout << "The given number (" << num << ") is NOT divisible by 4." << endl << "Quotient: " << quotient << " Remainder: " << remainder; 
		}
	}
	else if (num > 100)
	{
		square_root = sqrt(num);
		cout << "The number entered is greater than 100 and th square root of the number is " << square_root;
	}

	return 0;
}