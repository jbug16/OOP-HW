#include <iostream>
using namespace std;

class Spaceship
{
    private:
        int x;
        int y;
        string direction;
        string position;

    public:
        // Constructor
        Spaceship()
        {
            x = 0;
            y = 0;
            direction = "up";
            position = "{x: " + to_string(x) + ", y: " + to_string(y) + ", direction: " + direction + "}";
        }
        
        Spaceship(const string& path)
        {
            x = 0;
            y = 0;

            int _dir = 0; // 0 = up, 1 = right, 2 = down, 3 = left

            for (char c : path)
            {
                c = toupper(c);
                
                // Rotate left
                if (c == 'L') 
                {
                    _dir = (_dir + 3) % 4;
                }
                // Rotate right
                else if (c == 'R') 
                {
                    _dir = (_dir + 1) % 4;
                }
                // Advance
                else if (c == 'A') 
                {
                    switch (_dir)
                    {
                        case 0: y--; break; // Move up
                        case 1: x++; break; // Move right
                        case 2: y++; break; // Move down
                        case 3: x--; break; // Move left
                    }
                }
            }

            // Set final direction string
            switch (_dir)
            {
                case 0: direction = "up"; break;
                case 1: direction = "right"; break;
                case 2: direction = "down"; break;
                case 3: direction = "left"; break;
            }
            
            position = "{x: " + to_string(x) + ", y: " + to_string(y) + ", direction: " + direction + "}";
        }
        
        string getPosition()
        {
            return position;
        }
};

int main()
{
    Spaceship astrochuckler;
    cout << astrochuckler.getPosition() << endl;

    Spaceship lunacycle("RAALALL");
    cout << lunacycle.getPosition() << endl;

    Spaceship quirkonaut("AAAARAARLAAAARAAARRAAAALLLA");
    cout << quirkonaut.getPosition() << endl;

    Spaceship zanyverse("");
    cout << zanyverse.getPosition() << endl;

    Spaceship cosmocomedy("LAAA");
    cout << cosmocomedy.getPosition() << endl;

    return 0;
}