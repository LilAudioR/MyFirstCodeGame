//
//  main.cpp
//  myFirstC++Game
//
//  Created by Lillie Simpsonlittle on 21/03/2019.
//  Copyright © 2019 Lillie Simpsonlittle. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
bool AskToPlayAgain();

int main()
{
    PrintIntro();
    PlayGame();
    
    AskToPlayAgain();
    
    return 0;
}

//intro to game
void PrintIntro()
{
    constexpr int WORD_LENGTH = 5;
    cout << "Welcome to a fun word game.\n";
    cout << "Can you guess the "<< WORD_LENGTH;
    cout << " letter isogram I am thinking of?\n";
    cout << endl;
    return;
}

void PlayGame()
{
    //loop for number of turns asking for guesses
    constexpr int NO_OF_TURNS = 5;
    for (int count = 1; count <= NO_OF_TURNS; count++)
    {
        string Guess = GetGuess();
        cout << "Your guess was: " << Guess << endl;
        cout << endl;
    }
    return;
}

//player guess
string GetGuess()
{
    cout << "Enter your Guess:\n";
    string Guess = "";
    getline(cin, Guess);
    cout << endl;
    return Guess;
}

bool AskToPlayAgain()
{
    cout << "do you want to play again?";
    string Responce = "";
    getline(cin, Responce);
    
    cout << "First char: " << Responce[0];
    
    return false;
    
}
