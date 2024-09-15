#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define PI 3.14159265358979323846

int main() 
{
    double side, area;

    cout << "Enter the side: ";
    cin >> side;

    area = (6 * pow(side, 2)) / (4 * tan(PI / 6));

    cout << "The area of the hexagon is " << setprecision(4) << area << endl;

    return 0;
}