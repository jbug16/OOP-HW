#include <iostream>
#include <ctime>
using namespace std;

class MyDate
{
    private:
        int year;
        int month;
        int day;

    public:
        MyDate()
        {
            time_t now = time(0);

            tm* localtm = localtime(&now);

            year = localtm->tm_year + 1900;
            month = localtm->tm_mon;
            day = localtm->tm_mday;
        }

        MyDate(long elapsedTime)
        {
            time_t rawTime = elapsedTime;
            tm* timeInfo = gmtime(&rawTime);
            year = timeInfo->tm_year + 1900;
            month = timeInfo->tm_mon;
            day = timeInfo->tm_mday;
        }

        MyDate(int y, int m, int d)
        {
            year = y;
            month = m;
            day = d;
        }

        // Setters
        void setYear(int y) 
        {
            year = y;
        }

        void setMonth(int m) 
        {
            month = m;
        }

        void setDay(int d) 
        {
            day = d;
        }

        // Getters
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

};

int main()
{
    return 0;
}