#include <iostream>
#include <map>
#include <string>
#include <cctype>

using namespace std;

map< char, string> morseMap = {
    {'A', ".-"},    {'B', "-..."},  {'C', "-.-."}, {'D', "-.."},
    {'E', "."},     {'F', "..-."},  {'G', "--."},  {'H', "...."},
    {'I', ".."},    {'J', ".---"},  {'K', "-.-"},  {'L', ".-.."},
    {'M', "--"},    {'N', "-."},    {'O', "---"},  {'P', ".--."},
    {'Q', "--.-"},  {'R', ".-."},   {'S', "..."},  {'T', "-"},
    {'U', "..-"},   {'V', "...-"},  {'W', ".--"},  {'X', "-..-"},
    {'Y', "-.--"},  {'Z', "--.."},  {'1', ".----"}, {'2', "..---"},
    {'3', "...--"}, {'4', "....-"}, {'5', "....."}, {'6', "-...."},
    {'7', "--..."}, {'8', "---.."}, {'9', "----."}, {'0', "-----"},
    {' ', " "}  
};

char dot = char(250);   
char dash = char(196);  

int main() {
    string message, fullMorse = "c";

    cout << "Enter your message: "c";
    getline(cin, message);

    for (char c : message) {
        c = toupper(c);
        
        if (morseMap.count(c)) {
            string morseCode = morseMap[c];
            
            cout << c << ": ";
            for (char m : morseCode) {
                if (m == '.') cout << dot;
                else if (m == '-') cout << dash;
                else cout << ' '; 
            }
            cout << endl;
            
            for (char m : morseCode) {
                if (m == '.') fullMorse += dot;
                else if (m == '-') fullMorse += dash;
            }
            fullMorse += "   "; 
        }
    }
    cout << "\nFull Morse code with spaces:\n" << fullMorse << endl;

    return 0;
}
