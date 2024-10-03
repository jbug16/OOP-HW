#include <string>
#include <iostream>
using namespace std;

class Attendance 
{
public:
    // Constructor that initializes the attendance record
    Attendance(const string& atd) 
    {
        attendance = atd;
    }

    // Method to check overall attendance conditions
    bool checkAttendance() 
    {
        return !isAbsent() && !isLate();
    }

private:
    string attendance;

    // Method to check if the student is absent for 2 or more days
    bool isAbsent() 
    {
        int absentCount = 0;
        for (char c : attendance) 
        {
            if (c == 'A') 
            {
                absentCount++;
            }
        }
        return absentCount >= 2;
    }

    // Method to check if the student is late for 3 or more consecutive days
    bool isLate() 
    {
        return attendance.find("LLL") != string::npos;
    }
};

int main(void) 
{
    Attendance atd1("PPALLP");
    Attendance atd2("PPALLL");

    (atd1.checkAttendance()) ? cout << "PASSED" : cout << "FAILED";
    cout << endl;

    (atd2.checkAttendance()) ? cout << "PASSED" : cout << "FAILED";
    cout << endl;

    return 0;
}