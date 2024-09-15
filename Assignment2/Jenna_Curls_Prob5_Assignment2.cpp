#include <iostream>
#include <string>
using namespace std;

void count(const string &s)
{
    int letterCounts[26] = {0};

    // loop through each character in the string
    for (char c : s)
    {
        // checks if this is a letter
        if (isalpha(c))
        {
            c = tolower(c);

            // determines alphabetic position of letter using ASCII value
            letterCounts[c - 'a']++;
        }
    }

    // loop through alphabet
    for (int i = 0; i < 26; i++)
    {
        if (letterCounts[i] > 0)
        {
            // calculate the letter from ASCII value
            char letter = 'a' + i;
            cout << letter << ": " << letterCounts[i] << + " times" << endl;
        }
    }
}

int main()
{
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    count(input);

    return 0;
}