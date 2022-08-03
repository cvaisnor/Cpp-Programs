#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <deque>
using namespace std;

// Programmer: Chris Vaisnor
// Editor(s) used: VSCode
// Compiler(s) used: Linux Ubuntu Compiler

struct Value // stucture to hold a value
{
    int guess; // value guessed
};

int main()
{
    cout << "Programmer: Chris Vaisnor" << endl;
    cout << "Description: Over/under guesser w/ multiple tries." << endl;
    cout << endl;

    srand(time(0));

    int random = 1 + rand() % 100;

    cout << "I'm thinking of a number between 1 and 100." << endl;
    cout << "Guess what it is: " << endl;
    
    deque<Value> guesses; // deque , empty list to hold Value objects

    while(true)
    {   
        int guess = 0;
        cin >> guess;

        Value v = Value {guess}; // Value object to hold guesses
        
        bool found = false;
        
        for (int i = 0; i < guesses.size(); i++)
        {
            if (guesses[i].guess == guess)
            {
                found = true;
                break;
            }
        }

        if (found) // check if guess is already in array
        {
            cout << "You already guessed " << guess << " -- guess again: ";
            continue;
        }

        if (guess == random)
        {
            cout << "That's right -- the random number is " << random << "." << endl;
            break;
        }
        else if (guess > random)
        {
            cout << "That's too high -- guess again: ";
        }
        else
        {
            cout << "That's too low -- guess again: ";
        }

        guesses.push_front(v); // add guess to front of list
    }
}