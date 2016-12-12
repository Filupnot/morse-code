#include <iostream>
#include "string"
#include <map>
using namespace std;

void find(string tempStr, string & English)
{
    if (tempStr == ".-"){
        English += 'A';
    }
    else if (tempStr == "-..."){
        English += 'B';
    }
    else if (tempStr == "-.-."){
        English += 'C';
    }
    else if (tempStr == "-.."){
        English += 'D';
    }
    else if (tempStr == "-..."){
        English += 'E';
    }
    else if (tempStr == ".-.."){
        English += 'F';
    }
    else if (tempStr == "--."){
        English += 'G';
    }
    else if (tempStr == "...."){
        English += 'H';
    }
    else if (tempStr == ".."){
        English += 'I';
    }
    else if (tempStr == ".---"){
        English += 'J';
    }
    else if (tempStr == "-.-"){
        English += 'K';
    }
    else if (tempStr == ".-.."){
        English += 'L';
    }
    else if (tempStr == "--"){
        English += 'M';
    }
    else if (tempStr == "-."){
        English += 'N';
    }
    else if (tempStr == "---"){
        English += 'O';
    }
    else if (tempStr == ".--."){
        English += 'P';
    }
    else if (tempStr == "--.-"){
        English += 'Q';
    }
    else if (tempStr == ".-."){
        English += 'R';
    }
    else if (tempStr == "..."){
        English += 'S';
    }
    else if (tempStr == "-"){
        English += 'T';
    }
    else if (tempStr == "..-"){
        English += 'U';
    }
    else if (tempStr == "...-"){
        English += 'V';
    }
    else if (tempStr == ".--"){
        English += 'W';
    }
    else if (tempStr == "-..-"){
        English += 'X';
    }
    else if (tempStr == "-.--"){
        English += 'Y';
    }
    else if (tempStr == "--.."){
        English += 'Z';
    }
}

// New version of find, using stl map
// http://www.cplusplus.com/reference/map/map/map/
void find_stl(string findMe, string& strResult) {
    // Create the map...
    // TODO: the map should only be created once...
    map<string, string> mapMorse2Char, mapChar2Morse;

    // I found a mapping, and created a node application to use that to generate the text below:
    // https://github.com/knotthere/Morse-Code-JavaScript
    ////////////////////////////////////////////////////////////////////////////////
    mapMorse2Char["-----"] = "0";
    mapMorse2Char[".----"] = "1";
    mapMorse2Char["..---"] = "2";
    mapMorse2Char["...--"] = "3";
    mapMorse2Char["....-"] = "4";
    mapMorse2Char["....."] = "5";
    mapMorse2Char["-...."] = "6";
    mapMorse2Char["--..."] = "7";
    mapMorse2Char["---.."] = "8";
    mapMorse2Char["----."] = "9";
    mapMorse2Char[".-"] = "A";
    mapMorse2Char["-..."] = "B";
    mapMorse2Char["-.-."] = "C";
    mapMorse2Char["-.."] = "D";
    mapMorse2Char["."] = "E";
    mapMorse2Char["..-."] = "F";
    mapMorse2Char["--."] = "G";
    mapMorse2Char["...."] = "H";
    mapMorse2Char[".."] = "I";
    mapMorse2Char[".---"] = "J";
    mapMorse2Char["-.-"] = "K";
    mapMorse2Char[".-.."] = "L";
    mapMorse2Char["--"] = "M";
    mapMorse2Char["-."] = "N";
    mapMorse2Char["---"] = "O";
    mapMorse2Char[".--."] = "P";
    mapMorse2Char["--.-"] = "Q";
    mapMorse2Char[".-."] = "R";
    mapMorse2Char["..."] = "S";
    mapMorse2Char["-"] = "T";
    mapMorse2Char["..-"] = "U";
    mapMorse2Char["...-"] = "V";
    mapMorse2Char[".--"] = "W";
    mapMorse2Char["-..-"] = "X";
    mapMorse2Char["-.--"] = "Y";
    mapMorse2Char["--.."] = "Z";
    mapMorse2Char[".-.-.-"] = ".";
    mapMorse2Char["--..--"] = ",";
    mapMorse2Char["..--.."] = "?";
    mapMorse2Char["-.-.--"] = "!";
    mapMorse2Char["-....-"] = "-";
    mapMorse2Char["-..-."] = "/";
    mapMorse2Char[".--.-."] = "@";
    mapMorse2Char["-.--."] = "(";
    mapMorse2Char["-.--.-"] = ")";
    ////////////////////////////////////////////////////////////////////////////////
    mapChar2Morse["0"] = "-----";
    mapChar2Morse["1"] = ".----";
    mapChar2Morse["2"] = "..---";
    mapChar2Morse["3"] = "...--";
    mapChar2Morse["4"] = "....-";
    mapChar2Morse["5"] = ".....";
    mapChar2Morse["6"] = "-....";
    mapChar2Morse["7"] = "--...";
    mapChar2Morse["8"] = "---..";
    mapChar2Morse["9"] = "----.";
    mapChar2Morse["A"] = ".-";
    mapChar2Morse["B"] = "-...";
    mapChar2Morse["C"] = "-.-.";
    mapChar2Morse["D"] = "-..";
    mapChar2Morse["E"] = ".";
    mapChar2Morse["F"] = "..-.";
    mapChar2Morse["G"] = "--.";
    mapChar2Morse["H"] = "....";
    mapChar2Morse["I"] = "..";
    mapChar2Morse["J"] = ".---";
    mapChar2Morse["K"] = "-.-";
    mapChar2Morse["L"] = ".-..";
    mapChar2Morse["M"] = "--";
    mapChar2Morse["N"] = "-.";
    mapChar2Morse["O"] = "---";
    mapChar2Morse["P"] = ".--.";
    mapChar2Morse["Q"] = "--.-";
    mapChar2Morse["R"] = ".-.";
    mapChar2Morse["S"] = "...";
    mapChar2Morse["T"] = "-";
    mapChar2Morse["U"] = "..-";
    mapChar2Morse["V"] = "...-";
    mapChar2Morse["W"] = ".--";
    mapChar2Morse["X"] = "-..-";
    mapChar2Morse["Y"] = "-.--";
    mapChar2Morse["Z"] = "--..";
    mapChar2Morse["."] = ".-.-.-";
    mapChar2Morse[","] = "--..--";
    mapChar2Morse["?"] = "..--..";
    mapChar2Morse["!"] = "-.-.--";
    mapChar2Morse["-"] = "-....-";
    mapChar2Morse["/"] = "-..-.";
    mapChar2Morse["@"] = ".--.-.";
    mapChar2Morse["("] = "-.--.";
    mapChar2Morse[")"] = "-.--.-";
    ////////////////////////////////////////////////////////////////////////////////
    // ...

    // Use the map...
    strResult += mapMorse2Char[findMe];
    
}

void cipher(string Morse)
{
    // tempStr = morse character patterns
    // English = english final product
    string tempStr = "";
    string English = "";

    for (int counter = 0; counter < Morse.length(); counter++)
    {
        if (Morse[counter] != ' '){
            tempStr += Morse[counter];
        }
        else if (Morse[counter] == ' '){
            find(tempStr, English);
            tempStr = "";
        }

    }
    find(tempStr, English);
    cout << English;
}

void input(string & Morse)
{
    // Get phrase from user
    cout << "Enter Morse phrase:  ";
    getline (cin, Morse);
}

int main()
{
    string Morse = "";
    string dontStop = "";

    input(Morse);
    cipher(Morse);

    getline (cin, dontStop);
}