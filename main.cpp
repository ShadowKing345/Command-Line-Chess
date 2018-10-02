#include <stdio.h>
#include <iostream>
#include <windows.h>
#include "Helper.h"
#include "Display.h"
#include "Game.h"

using namespace std;

//This is the main class the contains the start to the game.

int main() {
    //Basic initialization of variables the first is the handler for the terminal.
    HANDLE outputHandler = GetStdHandle(STD_OUTPUT_HANDLE);
    string choice;

    Display::clearScreen(outputHandler);
    Display::drawMainMenu(outputHandler);

    //This is the main menu choice selection.
    do{
        //This function gets a string of anything you type and hit enter.
        getline(cin, choice);
        choice = Helper::stringToLower(choice);

        if(choice == Helper::stringToLower("exit")) {
            Display::clearScreen(outputHandler);
            return 0;
        } else if(choice == "new game" || choice == "newgame" || choice == "new_game"){
            Game::loadDefaultBoard(outputHandler);
            Game::GAME(outputHandler);
        } else if(choice == "help") {
            Display::clearScreen(outputHandler);
            cout << "To play the game all you have to do is return the coordinate for the piece say B1 and the coordinate where you want to place the piece A3.\nThey can be written in b1/a6 or b1,a6.\nNote: if you set the coordinate the the same place it is considered an invalid move." << endl;
            system("pause");
            Display::drawMainMenu(outputHandler);
            continue;
        }else if(choice == "load"){
            Game::loadSaveBoard(outputHandler);
            Game::GAME(outputHandler);
        } else{
            cout << "Invalid answer." << endl;
        }
        Display::drawMainMenu(outputHandler);
    }while(choice != Helper::stringToLower("exit"));

    //If you are reading this then you are expecting me to explain everything aren't you.
    //WHY IS IT RETURNING ZERO?
    return 0;
}