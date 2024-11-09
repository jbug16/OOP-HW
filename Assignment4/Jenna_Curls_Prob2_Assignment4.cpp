#include <iostream>
using namespace std;

class Person
{
    private:
        char *name; // Pointer to the name
		int age;

    public:
        // Constructor
        Person(const char *n, int a)
		{
			age = a;
			name = new char;
		}
};

int main()
{
    return 0;
}