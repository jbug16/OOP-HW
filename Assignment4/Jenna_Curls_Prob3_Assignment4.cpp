#include <iostream>
using namespace std;

class MySet
{
    private:
        unsigned int range;
        unsigned int size;
        bool *set;

    public:
        // Constructor
        MySet(unsigned int r)
        {
            range = r;
            size = 0;
            set = new bool[range + 1];

            // Initialize all elements to false
            for (unsigned int i = 0; i <= range; i++)
            {
                set[i] = false;
            }
        }

        // Copy constructor 
        MySet(const MySet& other)
        {
            range = other.range;
            size = other.size;
            set = new bool[range + 1];

            // Copy set values from other set
            for (unsigned int i = 0; i <= range; i++)
            {
                set[i] = other.set[i];
            }
        }

        // Deconstructor 
        ~MySet()
        {
            delete[] set; // Free memory
        }

        // Place new int into set
        void insertElement(int k)
        {
            if (k < 0 || k > range)
            {
                cout << "Invalid insert attempted for the numer " << k << "!" << endl;
            }
            else
            {
                set[k] = true;
                size++;
            }
        }

        // Delete int 
        void deleteElement(int m)
        {
            if (m < 0 || m > range)
            {
                cout << "Invalid delete attempted for the numer " << m << "!" << endl;
            }
            else
            {
                set[m] = false;
                size++;
            }
        }

        // Print set
        void printSet() const 
        {
            bool isEmpty = true;
            
            cout << "{ ";

            for (unsigned int i = 0; i <= range; i++)
            {
                if (set[i])
                {
                    if (!isEmpty)
                    {
                        cout << ", ";
                    }

                    cout << i;
                    isEmpty = false;
                }
            }

            if (isEmpty)
            {
                cout << "---";
            }

            cout << " }" << endl;
        }

        // Check if two sets are equal
        bool isEqualTo(const MySet& other) const
        {
            if (range != other.range) return false;

            for (unsigned int i = 0; i <= range; i++)
            {
                if (set[i] != other.set[i]) return false;
            }

            return true;
        }
};

int main()
{
    MySet s1(20);
    
    s1.insertElement(13);
    s1.insertElement(7);
    s1.insertElement(20);
    s1.insertElement(21);  // 21 is out of range
    
    cout << "Set 1: ";
    s1.printSet();
    
    s1.deleteElement(22);  // 22 is out of range
    s1.deleteElement(13);
    
    cout << "Set 1 after deletions: ";
    s1.printSet();
    
    MySet s2(100);
    cout << "Set 2: ";
    s2.printSet();
    
    MySet s3 = s1;  // Make a copy of set1
    
    cout << "s3.isEqualTo(s1) = " << s3.isEqualTo(s1) << endl;
    
    return 0;
}