//credits to Wild Zyzop on Stack Overflow and ChatGPT
// for the checkWord function help. couldn't get the yellow letters right
// (it is against my morals typically to code wwith CHatGPT 
// but Wild's code was in a language I was not familiar with
//and I needed the C++ version.)


#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <fstream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <unordered_map>

#include "blockyLetters.h"
//#include <stdlib.h>
using namespace std;
//Global Variables  
int guessCount = 1;
char currentGuess[5];
int i, j, x = 0;
bool winCondition = false;
//int correctStatus[5] = { 0,0,0,0,0 };
vector<int> correctStatus(5, 0);
int unlimitedPlay = 1;
//User-defined fucntions
void instructions();
vector<int> checkWord(string guess, string answer); //Checks guess with secret answer word

string print(int line, string guess, vector<int> cs, bool bl);
string printColor(int correctStatus);

int main() {
    srand(time(NULL));
    //Opening Words
    instructions();
    while (unlimitedPlay == 1) { //Allows for the user to endlessly play after each round while 1 is being Entered
        //FILE CREDITS - stanford i think
        vector<string> wordOptions; //initializes wordOptions list from wordleWords.txt
   
        ifstream file("fin.txt");
        string word;
        if (!file.is_open()) {
            //std::cerr << "Error opening file: " << file << std::endl;
            // Check for specific errors
            if (!file.good()) {
                std::cerr << "I/O error occurred." << std::endl;
            }
            else if (file.eof()) {
                std::cerr << "End-of-file reached unexpectedly." << std::endl;
            }
            else if (file.fail()) {
                std::cerr << "Logical error on I/O operation." << std::endl;
            }
            else {
                std::cerr << "Unknown error occurred." << std::endl;
            }
            return 1;
        }
        else {
            while (getline(file, word)) {
                wordOptions.push_back(word);
            }
        }
        
        
      //  cout << wordOptions.size() << "NUM OF GOD DAMN WORDS\n";
        file.close();
        int randNum = rand() % wordOptions.size();//chooses a random word from WordleWords.txt
        string answer = wordOptions[randNum];//Assigns random word to answer

        printf("GAME BEGINNING:\n");

        for (x = 0;x < 6;x++) {
            tryAgain:
            printf("Enter Guess #%d: ", guessCount);
            std::cin >> currentGuess;
            bool bln = false;
            string xyz = currentGuess;
            if (!cin.fail()) {
                for (int iv = 0; iv < wordOptions.size(); iv++) {
                    if (currentGuess == wordOptions[iv]) { //does the word exist
                        bln = true;
                    }
                }
            }
            else { bln = false; }

            if (bln == false) {
                cout << "Not a valid word, please try again :)\n";
                goto tryAgain; //yes i use gotos, persoanlly i like them(in moderation ofc and iff it's not like a million lines away)
            }
           

            vector<int> correctStatus = checkWord(currentGuess, answer);
           // checkWord(currentGuess, answer);
            for (int iii = 1; iii <= 11; iii++){
                string x = print(iii, currentGuess, correctStatus, true);
                cout << x;
                    cout << endl;
           }
            cout << "\033[37m";

            if (currentGuess == answer) { //Returns the You Win if the guess matches the ANswer
                winCondition = true;
                printf("YOU WIN!!!!\n");
                break;
            }
            guessCount = guessCount + 1;
        }
        if (winCondition == false) { //If user does not get word within six guesses, they lose.
            cout << "Game over!!! The correct word was: \033[36m\n";
            for (int iii = 1; iii <= 11; iii++) {
                string x = print(iii, answer, correctStatus, false);
                cout << x;
                cout << endl;
            }
        }
        
        printf("\033[37mWould you like to play again? (Enter 1 to keep going): ");
        std::cin >> unlimitedPlay;
        guessCount = 1;
    }
    return 0;
}
//

vector<int> checkWord(string guess, string answer) {
    //nitialize correctStatus to store the result for each character (0 = not checked, 1 = out of place, 2 = correct)
    vector<int> correctStatus(5, 0);
    unordered_map<char, int> alreadyThere; // To keep track of the seen letters

    // finding the right letters in their places
    for (int i = 0; i < 5; ++i) {
        if (guess[i] == answer[i]) {
            correctStatus[i] = 2; // Mark as correct
            alreadyThere[guess[i]]++; // Count the correct occurrences
        }
    }

    // search for existing letters that are out of place
    for (int i = 0; i < 5; ++i) {
        if (correctStatus[i] == 2) {
            continue; // Skip already marked as correct
        }

        // Check if the letter exists in the wordle and is not fully accounted for in alreadyThere
        if (std::count(answer.begin(), answer.end(), guess[i]) > alreadyThere[guess[i]]) {
            correctStatus[i] = 1; // Mark as existing but misplaced
            alreadyThere[guess[i]]++; // Count the misplaced occurrences
        }
    }

    // Print feedback for debugging
    /*for (int i = 0; i < 5; ++i) {
        cout << correctStatus[i] << " ";
    }
    cout << endl;*/

    return correctStatus;
}


//instructions for play
void instructions(){
    cout << "--------Welcome to Wordle--------\n";
    cout << "--------Objective--------\n";
    cout << "Try to find out the secret FIVE-letter word that the program has randomly chosen using SIX guesses!\n";
    cout << "--------Rules--------\n";
    cout << "1. Put in a five-letter guess each turn, and hit enter.\n" 
        <<"2. The program will reprint our guess out, but it will be color-coded.\n"
        <<"If the letter is \033[31mRED\033[37m, that means the letter is not in the word at all.\n"
        <<"If the letter is \033[33mYELLOW\033[37m, that means the letter is in the word, but not in the right index.\n"
        << "If the letter is \033[32mGREEN\033[37m, that means the letter is both in the word AND in the right index!\n"
        <<"Good luck.\n";
}