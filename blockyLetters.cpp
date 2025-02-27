
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <fstream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <cstdlib>
using namespace std;
string printColor(int correctStatus);

string print(int line, string guess, vector<int> cs, bool bl) {
    string result = "";
    for (int ii = 0; ii < 5; ii++) {
        if (bl == true) {
            result += printColor(cs[ii]);
        }
       char letter = guess[ii];
        //this next switch case madness takes up ~1000 lines
        switch (letter) {
        case 'a': 
            switch (line) {
            case 1:
                result += " .----------------. ";
                break;
            case 2:
                result += "| .--------------. |";
                break;
            case 3:
                result += "| |      __      | |";
                break;
            case 4:
                result += "| |     /  \\     | |";
                break;
            case 5:
                result += "| |    / /\\ \\    | |";
                break;
            case 6:
                result += "| |   / ____ \\   | |";
                break;
            case 7:
                result += "| | _/ /    \\ \\_ | |";
                break;
            case 8:
                result += "| ||____|  |____|| |";
                break;
            case 9:
                result += "| |              | |";
                break;
            case 10:
                result += "| '--------------' |";
                break;
            case 11:
                result += " '----------------' ";
                break;
            default:
                break;
            }
            break;
        case 'b':
            switch (line) {
            case 1:
                result += " .----------------. ";
                break;
            case 2:
                result += "| .--------------. |";
                break;
            case 3:
                result += "| |   ______     | |";
                break;
            case 4:
                result += "| |  |_   _ \\    | |";
                break;
            case 5:
                result += "| |    | |_) |   | |";
                break;
            case 6:
                result += "| |    |  __'.   | |";
                break;
            case 7:
                result += "| |   _| |__) |  | |";
                break;
            case 8:
                result += "| |  |_______/   | |";
                break;
            case 9:
                result += "| |              | |";
                break;
            case 10:
                result += "| '--------------' |";
                break;
            case 11:
                result += " '----------------' ";
                break;
            default:
                break;
            }
            break;
        case 'c':
            switch (line) {
            case 1:
                result += " .----------------. ";
                break;
            case 2:
                result += "| .--------------. |";
                break;
            case 3:
                result += "| |     ______   | |";
                break;
            case 4:
                result += "| |   .' ___  |  | |";
                break;
            case 5:
                result += "| |  / .'   \\_|  | |";
                break;
            case 6:
                result += "| |  | |         | |";
                break;
            case 7:
                result += "| |  \\ `.___.'\\  | |";
                break;
            case 8:
                result += "| |   `._____.'  | |";
                break;
            case 9:
                result += "| |              | |";
                break;
            case 10:
                result += "| '--------------' |";
                break;
            case 11:
                result += " '----------------' ";
                break;
            default:
                break;
            }
            break;
        case 'd':
            switch (line) {
            case 1:
                result += " .----------------. ";
                break;
            case 2:
                result += "| .--------------. |";
                break;
            case 3:
                result += "| |  ________    | |";
                break;
            case 4:
                result += "| | |_   ___ `.  | |";
                break;
            case 5:
                result += "| |   | |   `. \\ | |";
                break;
            case 6:
                result += "| |   | |    | | | |";
                break;
            case 7:
                result += "| |  _| |___.' / | |";
                break;
            case 8:
                result += "| | |________.'  | |";
                break;
            case 9:
                result += "| |              | |";
                break;
            case 10:
                result += "| '--------------' |";
                break;
            case 11:
                result += " '----------------' ";
                break;
            default:
                break;
            }
            break;
        case 'e':
            switch (line) {
            case 1:
                result += " .----------------. ";
                break;
            case 2:
                result += "| .--------------. |";
                break;
            case 3:
                result += "| |  _________   | |";
                break;
            case 4:
                result += "| | |_   ___  |  | |";
                break;
            case 5:
                result += "| |   | |_  \\_|  | |";
                break;
            case 6:
                result += "| |   |  _|  _   | |";
                break;
            case 7:
                result += "| |  _| |___/ |  | |";
                break;
            case 8:
                result += "| | |_________|  | |";
                break;
            case 9:
                result += "| |              | |";
                break;
            case 10:
                result += "| '--------------' |";
                break;
            case 11:
                result += " '----------------' ";
                break;
            default:
                break;
            }
            break;
        case 'f':
            switch (line) {
            case 1:
                result += " .----------------. ";
                break;
            case 2:
                result += "| .--------------. |";
                break;
            case 3:
                result += "| |  _________   | |";
                break;
            case 4:
                result += "| | |_   ___  |  | |";
                break;
            case 5:
                result += "| |   | |_  \\_|  | |";
                break;
            case 6:
                result += "| |   |  _|      | |";
                break;
            case 7:
                result += "| |  _| |_       | |";
                break;
            case 8:
                result += "| | |_____|      | |";
                break;
            case 9:
                result += "| |              | |";
                break;
            case 10:
                result += "| '--------------' |";
                break;
            case 11:
                result += " '----------------' ";
                break;
            default:
                break;
            }
            break;
        case 'g':
            switch (line) {
            case 1:
                result += " .----------------. ";
                break;
            case 2:
                result += "| .--------------. |";
                break;
            case 3:
                result += "| |    ______    | |";
                break;
            case 4:
                result += "| |  .' ___  |   | |";
                break;
            case 5:
                result += "| | / .'   \\_|   | |";
                break;
            case 6:
                result += "| | | |    ____  | |";
                break;
            case 7:
                result += "| | \\ `.___]  _| | |";
                break;
            case 8:
                result += "| |  `._____.'   | |";
                break;
            case 9:
                result += "| |              | |";
                break;
            case 10:
                result += "| '--------------' |";
                break;
            case 11:
                result += " '----------------' ";
                break;
            default:
                break;
            }
            break;
        case 'h':
            switch (line) {
            case 1:
                result += " .----------------. ";
                break;
            case 2:
                result += "| .--------------. |";
                break;
            case 3:
                result += "| |  ____  ____  | |";
                break;
            case 4:
                result += "| | |_   ||   _| | |";
                break;
            case 5:
                result += "| |   | |__| |   | |";
                break;
            case 6:
                result += "| |   |  __  |   | |";
                break;
            case 7:
                result += "| |  _| |  | |_  | |";
                break;
            case 8:
                result += "| | |____||____| | |";
                break;
            case 9:
                result += "| |              | |";
                break;
            case 10:
                result += "| '--------------' |";
                break;
            case 11:
                result += " '----------------' ";
                break;
            default:
                break;
            }            break;
        case 'i':
            switch (line) {
            case 1:
                result += " .----------------. ";
                break;
            case 2:
                result += "| .--------------. |";
                break;
            case 3:
                result += "| |     _____    | |";
                break;
            case 4:
                result += "| |    |_   _|   | |";
                break;
            case 5:
                result += "| |      | |     | |";
                break;
            case 6:
                result += "| |      | |     | |";
                break;
            case 7:
                result += "| |     _| |_    | |";
                break;
            case 8:
                result += "| |    |_____|   | |";
                break;
            case 9:
                result += "| |              | |";
                break;
            case 10:
                result += "| '--------------' |";
                break;
            case 11:
                result += " '----------------' ";
                break;
            default:
                break;
            }            break;
        case 'j':
            switch (line) {
            case 1:
                result += " .----------------. ";
                break;
            case 2:
                result += "| .--------------. |";
                break;
            case 3:
                result += "| |     _____    | |";
                break;
            case 4:
                result += "| |    |_   _|   | |";
                break;
            case 5:
                result += "| |      | |     | |";
                break;
            case 6:
                result += "| |   _  | |     | |";
                break;
            case 7:
                result += "| |  | |_' |     | |";
                break;
            case 8:
                result += "| |  `.___.'     | |";
                break;
            case 9:
                result += "| |              | |";
                break;
            case 10:
                result += "| '--------------' |";
                break;
            case 11:
                result += " '----------------' ";
                break;
            default:
                break;
            }            break;
        case 'k':
            switch (line) {
            case 1:
                result += " .----------------. ";
                break;
            case 2:
                result += "| .--------------. |";
                break;
            case 3:
                result += "| |  ___  ____   | |";
                break;
            case 4:
                result += "| | |_  ||_  _|  | |";
                break;
            case 5:
                result += "| |   | |_/ /    | |";
                break;
            case 6:
                result += "| |   |  __'.    | |";
                break;
            case 7:
                result += "| |  _| |  \\ \\_  | |";
                break;
            case 8:
                result += "| | |____||____| | |";
                break;
            case 9:
                result += "| |              | |";
                break;
            case 10:
                result += "| '--------------' |";
                break;
            case 11:
                result += " '----------------' ";
                break;
            default:
                break;
            }            break;
        case 'l':
            switch (line) {
            case 1:
                result += " .----------------. ";
                break;
            case 2:
                result += "| .--------------. |";
                break;
            case 3:
                result += "| |   _____      | |";
                break;
            case 4:
                result += "| |  |_   _|     | |";
                break;
            case 5:
                result += "| |    | |       | |";
                break;
            case 6:
                result += "| |    | |   _   | |";
                break;
            case 7:
                result += "| |   _| |__/ |  | |";
                break;
            case 8:
                result += "| |  |________|  | |";
                break;
            case 9:
                result += "| |              | |";
                break;
            case 10:
                result += "| '--------------' |";
                break;
            case 11:
                result += " '----------------' ";
                break;
            default:
                break;
            }            break;
        case 'm':
            switch (line) {
            case 1:
                result += " .----------------. ";
                break;
            case 2:
                result += "| .--------------. |";
                break;
            case 3:
                result += "| | ____    ____ | |";
                break;
            case 4:
                result += "| ||_   \\  /   _|| |";
                break;
            case 5:
                result += "| |  |   \\/   |  | |";
                break;
            case 6:
                result += "| |  | |\\  /| |  | |";
                break;
            case 7:
                result += "| | _| |_\\/_| |_ | |";
                break;
            case 8:
                result += "| ||_____||_____|| |";
                break;
            case 9:
                result += "| |              | |";
                break;
            case 10:
                result += "| '--------------' |";
                break;
            case 11:
                result += " '----------------' ";
                break;
            default:
                break;
            }            break;
        case 'n':
            switch (line) {
            case 1:
                result += " .----------------. ";
                break;
            case 2:
                result += "| .--------------. |";
                break;
            case 3:
                result += "| | ____  _____  | |";
                break;
            case 4:
                result += "| ||_   \\|_   _| | |";
                break;
            case 5:
                result += "| |  |   \\ | |   | |";
                break;
            case 6:
                result += "| |  | |\\ \\| |   | |";
                break;
            case 7:
                result += "| | _| |_\\   |_  | |";
                break;
            case 8:
                result += "| ||_____|\\____| | |";
                break;
            case 9:
                result += "| |              | |";
                break;
            case 10:
                result += "| '--------------' |";
                break;
            case 11:
                result += " '----------------' ";
                break;
            default:
                break;
            }            break;
        case 'o':
            switch (line) {
            case 1:
                result += " .----------------. ";
                break;
            case 2:
                result += "| .--------------. |";
                break;
            case 3:
                result += "| |     ____     | |";
                break;
            case 4:
                result += "| |   .'    `.   | |";
                break;
            case 5:
                result += "| |  /  .--.  \\  | |";
                break;
            case 6:
                result += "| |  | |    | |  | |";
                break;
            case 7:
                result += "| |  \\  `--'  /  | |";
                break;
            case 8:
                result += "| |   `.____.'   | |";
                break;
            case 9:
                result += "| |              | |";
                break;
            case 10:
                result += "| '--------------' |";
                break;
            case 11:
                result += " '----------------' ";
                break;
            default:
                break;
            }            break;
        case 'p':
            switch (line) {
            case 1:
                result += " .----------------. ";
                break;
            case 2:
                result += "| .--------------. |";
                break;
            case 3:
                result += "| |   ______     | |";
                break;
            case 4:
                result += "| |  |_   __ \\   | |";
                break;
            case 5:
                result += "| |    | |__) |  | |";
                break;
            case 6:
                result += "| |    |  ___/   | |";
                break;
            case 7:
                result += "| |   _| |_      | |";
                break;
            case 8:
                result += "| |  |_____|     | |";
                break;
            case 9:
                result += "| |              | |";
                break;
            case 10:
                result += "| '--------------' |";
                break;
            case 11:
                result += " '----------------' ";
                break;
            default:
                break;
            }            break;
        case 'q':
            switch (line) {
            case 1:
                result += " .----------------. ";
                break;
            case 2:
                result += "| .--------------. |";
                break;
            case 3:
                result += "| |    ___       | |";
                break;
            case 4:
                result += "| |  .'   '.     | |";
                break;
            case 5:
                result += "| | /  .-.  \\    | |";
                break;
            case 6:
                result += "| | | |   | |    | |";
                break;
            case 7:
                result += "| | \\  `-'  \\_   | |";
                break;
            case 8:
                result += "| |  `.___.\\__|  | |";
                break;
            case 9:
                result += "| |              | |";
                break;
            case 10:
                result += "| '--------------' |";
                break;
            case 11:
                result += " '----------------' ";
                break;
            default:
                break;
            }            break;
        case 'r':
            switch (line) {
            case 1:
                result += " .----------------. ";
                break;
            case 2:
                result += "| .--------------. |";
                break;
            case 3:
                result += "| |  _______     | |";
                break;
            case 4:
                result += "| | |_   __ \\    | |";
                break;
            case 5:
                result += "| |   | |__) |   | |";
                break;
            case 6:
                result += "| |   |  __ /    | |";
                break;
            case 7:
                result += "| |  _| |  \\ \\_  | |";
                break;
            case 8:
                result += "| | |____| |___| | |";
                break;
            case 9:
                result += "| |              | |";
                break;
            case 10:
                result += "| '--------------' |";
                break;
            case 11:
                result += " '----------------' ";
                break;
            default:
                break;
            }            break;
        case 's':
            switch (line) {
            case 1:
                result += " .----------------. ";
                break;
            case 2:
                result += "| .--------------. |";
                break;
            case 3:
                result += "| |    _______   | |";
                break;
            case 4:
                result += "| |   /  ___  |  | |";
                break;
            case 5:
                result += "| |  |  (__ \\_|  | |";
                break;
            case 6:
                result += "| |   '.___`-.   | |";
                break;
            case 7:
                result += "| |  |`\\____) |  | |";
                break;
            case 8:
                result += "| |  |_______.'  | |";
                break;
            case 9:
                result += "| |              | |";
                break;
            case 10:
                result += "| '--------------' |";
                break;
            case 11:
                result += " '----------------' ";
                break;
            default:
                break;
            }            break;
        case 't':
            switch (line) {
            case 1:
                result += " .----------------. ";
                break;
            case 2:
                result += "| .--------------. |";
                break;
            case 3:
                result += "| |  _________   | |";
                break;
            case 4:
                result += "| | |  _   _  |  | |";
                break;
            case 5:
                result += "| | |_/ | | \\_|  | |";
                break;
            case 6:
                result += "| |     | |      | |";
                break;
            case 7:
                result += "| |    _| |_     | |";
                break;
            case 8:
                result += "| |   |_____|    | |";
                break;
            case 9:
                result += "| |              | |";
                break;
            case 10:
                result += "| '--------------' |";
                break;
            case 11:
                result += " '----------------' ";
                break;
            default:
                break;
            }            break;
        case 'u':
            switch (line) {
            case 1:
                result += " .----------------. ";
                break;
            case 2:
                result += "| .--------------. |";
                break;
            case 3:
                result += "| | _____  _____ | |";
                break;
            case 4:
                result += "| ||_   _||_   _|| |";
                break;
            case 5:
                result += "| |  | |    | |  | |";
                break;
            case 6:
                result += "| |  | '    ' |  | |";
                break;
            case 7:
                result += "| |   \\ `--' /   | |";
                break;
            case 8:
                result += "| |    `.__.'    | |";
                break;
            case 9:
                result += "| |              | |";
                break;
            case 10:
                result += "| '--------------' |";
                break;
            case 11:
                result += " '----------------' ";
                break;
            default:
                break;
            }            break;
        case 'v':
            switch (line) {
            case 1:
                result += " .----------------. ";
                break;
            case 2:
                result += "| .--------------. |";
                break;
            case 3:
                result += "| | ____   ____  | |";
                break;
            case 4:
                result += "| ||_  _| |_  _| | |";
                break;
            case 5:
                result += "| |  \\ \\   / /   | |";
                break;
            case 6:
                result += "| |   \\ \\ / /    | |";
                break;
            case 7:
                result += "| |    \\ ' /     | |";
                break;
            case 8:
                result += "| |     \\_/      | |";
                break;
            case 9:
                result += "| |              | |";
                break;
            case 10:
                result += "| '--------------' |";
                break;
            case 11:
                result += " '----------------' ";
                break;
            default:
                break;
            }            break;
        case 'w':
            switch (line) {
            case 1:
                result += " .----------------. ";
                break;
            case 2:
                result += "| .--------------. |";
                break;
            case 3:
                result += "| | _____  _____ | |";
                break;
            case 4:
                result += "| ||_   _||_   _|| |";
                break;
            case 5:
                result += "| |  | | /\\ | |  | |";
                break;
            case 6:
                result += "| |  | |/  \\| |  | |";
                break;
            case 7:
                result += "| |  |   /\\   |  | |";
                break;
            case 8:
                result += "| |  |__/  \\__|  | |";
                break;
            case 9:
                result += "| |              | |";
                break;
            case 10:
                result += "| '--------------' |";
                break;
            case 11:
                result += " '----------------' ";
                break;
            default:
                break;
            }            break;
        case 'x':
            switch (line) {
            case 1:
                result += " .----------------. ";
                break;
            case 2:
                result += "| .--------------. |";
                break;
            case 3:
                result += "| |  ____  ____  | |";
                break;
            case 4:
                result += "| | |_  _||_  _| | |";
                break;
            case 5:
                result += "| |   \\ \\  / /   | |";
                break;
            case 6:
                result += "| |    > `' <    | |";
                break;
            case 7:
                result += "| |  _/ /'`\\ \\_  | |";
                break;
            case 8:
                result += "| | |____||____| | |";
                break;
            case 9:
                result += "| |              | |";
                break;
            case 10:
                result += "| '--------------' |";
                break;
            case 11:
                result += " '----------------' ";
                break;
            default:
                break;
            }            break;
        case 'y':
            switch (line) {
            case 1:
                result += " .----------------. ";
                break;
            case 2:
                result += "| .--------------. |";
                break;
            case 3:
                result += "| |  ____  ____  | |";
                break;
            case 4:
                result += "| | |_  _||_  _| | |";
                break;
            case 5:
                result += "| |   \\ \\  / /   | |";
                break;
            case 6:
                result += "| |    \\ \\/ /    | |";
                break;
            case 7:
                result += "| |    _|  |_    | |";
                break;
            case 8:
                result += "| |   |______|   | |";
                break;
            case 9:
                result += "| |              | |";
                break;
            case 10:
                result += "| '--------------' |";
                break;
            case 11:
                result += " '----------------' ";
                break;
            default:
                break;
            }            break;
        case 'z':
            switch (line) {
            case 1:
                result += " .----------------. ";
                break;
            case 2:
                result += "| .--------------. |";
                break;
            case 3:
                result += "| |   ________   | |";
                break;
            case 4:
                result += "| |  |  __   _|  | |";
                break;
            case 5:
                result += "| |  |_/  / /    | |";
                break;
            case 6:
                result += "| |     .'.' _   | |";
                break;
            case 7:
                result += "| |   _/ /__/ |  | |";
                break;
            case 8:
                result += "| |  |________|  | |";
                break;
            case 9:
                result += "| |              | |";
                break;
            case 10:
                result += "| '--------------' |";
                break;
            case 11:
                result += " '----------------' ";
                break;
            default:
                break;
            }            break;

        default:
            cout << "Error: blockyLetters.cpp/print/switch/letter" << endl;
        }
    }
    return result;
}

string printColor(int correctStatus) {
    string color;
        //Checks th correctness status of each index
        if (correctStatus == 0) {
           
            color = "\033[31m";
        }
        else if (correctStatus == 1) {
          
            color = "\033[33m";
        }
        else {
            
            color = "\033[32m";
        }
    
        return color;
}