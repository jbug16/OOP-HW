#include <iostream>
#include <ctime>
using namespace std;

class MyDate {
    private:
        int year;
        int month;
        int day;

    public:
        MyDate() 
        {
            time_t t = time(0);
            struct tm* now = localtime(&t);
            year = now->tm_year + 1900;
            month = now->tm_mon;
            day = now->tm_mday;
        }

        MyDate(long elapsedTime) 
        {
            struct tm* dt = gmtime(&elapsedTime);
            year = dt->tm_year + 1900;
            month = dt->tm_mon;
            day = dt->tm_mday;
        }

        MyDate(int year, int month, int day)
        {
            year = year;
            month = month;
            day = day;
        }

        int getYear() const 
        {
            return year;
        }

        int getMonth() const 
        {
            return month;
        }

        int getDay() const 
        {
            return day;
        }

        void setYear(int year) 
        {
            this->year = year;
        }

        void setMonth(int month) 
        {
            this->month = month;
        }

        void setDay(int day) 
        {
            this->day = day;
        }

        void setDate(long elapsedTime) 
        {
            struct tm* dt = gmtime(&elapsedTime);
            year = dt->tm_year + 1900;
            month = dt->tm_mon;
            day = dt->tm_mday;
        }
};

int main() {

    MyDate date1;
    MyDate date2(3435555513);

    cout << "Current Date: " << date1.getYear() << "/" << date1.getMonth() + 1 << "/" << date1.getDay() << endl;
    cout << "Custom Date: " << date2.getYear() << "/" << date2.getMonth() + 1 << "/" << date2.getDay() << endl;

    return 0;

}