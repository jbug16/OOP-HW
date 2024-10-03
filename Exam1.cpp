#include <iostream>
using namespace std;

void uniqueNumber(int number)
{
    int digits = 0;
    int all_numbers[10] = {0}; // To keep track of all digits (0-9)
    int unique[10];            // To store unique digits
    int unique_count = 0;      // Count of unique digits

    // Process each digit of the number
    while (number > 0)
    {
        int digit = number % 10;
        all_numbers[digit]++;  // Increment count for this digit
        number /= 10;
    }

    // Collect unique digits
    for (int i = 0; i < 10; i++)
    {
        if (all_numbers[i] == 1)
        {
            unique[unique_count++] = i;
        }
    }

    // Output unique digits
    for (int i = 0; i < unique_count; i++)
    {
        cout << unique[i] << " ";
    }
    cout << endl;
}

int main()
{
    uniqueNumber(112223333);
    return 0;
}