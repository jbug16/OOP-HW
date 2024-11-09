#include <iostream>
using namespace std;

int average (int* array, int size)
{
    int sum = 0;
    for (int i = 0; i <= size; i++)
    {
        sum += array[i];
    }
    
    return sum/size;
}

double average (double* array, int size)
{
    double sum = 0.0;
    for (int i = 0; i <= size; i++)
    {
        sum += array[i];
    }
    
    return sum/size;
}



int main()
{
    int size = 10;
    double array[size];

    cout << "Enter 10 double values: " << endl;

    // Get input
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    // Call average function
    double avg = average(array, 10);
    cout << "The average is: " << avg << endl;

    return 0;
}