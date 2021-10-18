//Magic Number program: 1st improvement.

#include <iostream>
#include <cstdlib>

int main()
{
    int magic;  // magic number
    int guess;  // user's guess

    magic = rand(); // get a random number

    // asking for the user to input a guess and use that input (first requiring a cin statement) and see if guess is correct or incorrect
    cout << "Enter your guess:     ";
    cin >> guess;

    if(guess == magic) cout << "** Right **";
    else cout << "...Sorry, you're wrong.";

    return 0;
}