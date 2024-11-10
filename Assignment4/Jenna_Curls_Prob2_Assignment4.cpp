#include <iostream>
#include <cstring>
using namespace std;

class Person 
{
    private:
        int age;
        char *name;

    public:
        Person(const char *nameInput, int ageInput)
        {
            // Allocate memory for the name
            name = new char[strlen(nameInput) + 1];
            // Copy name
            strcpy(name, nameInput);

            age = ageInput;
        }

        // Deep copy
        Person(const Person &p)
        {
            // Allocate memory for name
            name = new char[strlen(p.name) + 1];
            // Copy naame
            strcpy(name, p.name);

            age = p.age;
        }

        // Deconstuctor
        ~Person()
        {
            // Free memory for name
            delete[] name;
        }

        void display() const
        {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }

        void setName(const char *newName)
        {
            // Free mmemory
            delete[] name;
            // Allocate new memory
            name = new char[strlen(newName) + 1];
            // Copy new name
            strcpy(name, newName);
        }

        void setAge(int newAge)
        {
            age = newAge;
        }
};

int main() 
{
    // Create Caleb
    cout << endl << "--- Create Person Caleb ---" << endl << endl;
    Person person1("Caleb", 30);
    person1.display();

    // Create person2
    cout << endl << "--- Person2 = Person1 ---" << endl << endl;
    Person person2 = person1;
    person2.display();

    // Change person2 name to Jenna
    cout << endl << "--- Change Caleb to Jenna (Shallow Copy) ---" << endl << endl;
    person2.setName("Jenna");
    person2.display();
    person1.display(); // Check if person1 is changed too, because a shallow copy should change person1

    // Deep copy example
    cout << endl << "--- Deep Copy Example ---" << endl << endl;
    Person person3(person1);
    person3.display();
    person1.display();
    
    return 0;
}