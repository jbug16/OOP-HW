#include <iostream>
using namespace std;

int roll()
{
    return rand() % 6 + 1;
}

bool craps(int sum)
{
    return (sum == 2 || sum == 3 || sum == 12);
}

bool natural(int sum)
{
    return (sum == 7 || sum == 11);
}

int main()
{
    srand(time(0));

    int roll1 = roll(), roll2 = roll(), sum = roll1 + roll2;
    cout << "You rolled " << roll1 << " + " << roll2 << " = " << sum << endl;

   if (craps(sum))
    {
        cout << "You lose!";
    }
    else if (natural(sum))
    {
        cout << "You win!";
    }
    else
    {
        cout << "Point is " << sum << endl;
        
        while (true)
        {
            int roll1 = roll(), roll2 = roll(), newSum = roll1 + roll2;
            cout << "You rolled " << roll1 << " + " << roll2 << " = " << newSum << endl;

            if (newSum == 7)
            {
                cout << "You lose!" << endl;
                break;
            }
            else if (newSum == sum)
            {
                cout << "You win!" << endl;
                break;
            }
        }
    }

    return 0;
}