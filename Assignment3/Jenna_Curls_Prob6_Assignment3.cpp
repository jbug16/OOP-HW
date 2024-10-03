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
            direction = "up";
            
            int _dir = 0; // 0 = up, 1 = right, 2 = down, 3 = left
            
            for (char c : path)
            {
                c = toupper(c);
                if (c == 'L') 
                {
                    // Rotate left
                    _dir = (_dir + 3) % 4;
                }
                else if (c == 'R') {
                    // Rotate right
                    _dir = (_dir + 1) % 4;
                }
            }
            
            switch (_dir)
            {
                case 0:
                    direction = "up";
                    break;
                case 1:
                    direction = "right";
                    break;
                case 2:
                    direction = "down";
                    break;
                case 3:
                    direction = "left";
                    break;
            }
            
            for (char c : path)
            {
                // Advance
                if (c == 'A')
                {
                    switch (_dir)
                    {
                        case 0:
                            y++;
                            break;
                        case 1:
                            x++;
                            break;
                        case 2:
                            y--;
                            break;
                        case 3:
                            x--;
                            break;
                    }
                }
            }
            
            position = "{x: " + to_string(x) + ", y: " + to_string(y) + ", direction: " + direction + "}";
        }
        
        int getX()
        {
            return x;
        }
        
        int getY()
        {
            return y;
        }
        
        string getDirection()
        {
            return direction;
        }
        
        string getPosition()
        {
            return position;
        }
};

int main()
{
    Spaceship spaceship("LA");
    cout << spaceship.getPosition();
    
    return 0;
}