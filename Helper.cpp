#include "Helper.h"

using namespace std;

//This class is mainly for helpful functions that don't belong in any other class.

//Converts a string to lowercase.
string Helper::stringToLower(string String) {
    transform(String.begin(), String.end(), String.begin(), ::tolower);
    return String;
}

//Gets the id number of the cords you inputted.
int Helper::getBoardNumber(std::string string) {
    int n = 0;
    if (string.substr(1,2) == "8")
        n += 0;
    if (string.substr(1,2) == "7")
        n += 8;
    if (string.substr(1,2) == "6")
        n += 16;
    if (string.substr(1,2) == "5")
        n += 24;
    if (string.substr(1,2) == "4")
        n += 32;
    if (string.substr(1,2) == "3")
        n += 40;
    if (string.substr(1,2) == "2")
        n += 48;
    if (string.substr(1,2) == "1")
        n += 56;

    if (string.substr(0,1) == "a")
        n += 0;
    if (string.substr(0,1) == "b")
        n += 1;
    if (string.substr(0,1) == "c")
        n += 2;
    if (string.substr(0,1) == "d")
        n += 3;
    if (string.substr(0,1) == "e")
        n += 4;
    if (string.substr(0,1) == "f")
        n += 5;
    if (string.substr(0,1) == "g")
        n += 6;
    if (string.substr(0,1) == "h")
        n += 7;

    return n;
}

//Just removes any letter you give it.
std::string Helper::removeLetter(std::string &string, char letter) {
    int end = string.size();
    remove_copy(string.begin(), string.end(), back_inserter(string), letter);
    return string.erase(0, end);;
}