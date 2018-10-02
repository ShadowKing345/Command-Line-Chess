#ifndef CHESS_DISPLAY_H
#define CHESS_DISPLAY_H

#include <iomanip>
#include <windows.h>
#include <iostream>
#include "Assets.h"
#include "PiecesType.h"

class Display {
public:
    static COORD ID[];
    //This is the colour data for the tiles.
    enum colorBackGroundNo {
        redBG = 12 * 16,
        blackBG = 0 * 16,
        whiteBG = 15 * 16
    };

    static void drawPixel(HANDLE outputHandler, int color);
    static void drawTile(HANDLE outputHandler, COORD position, PiecesType::PiecesTypeEnum type, int colorBG, int colorFG);
    static void drawGrid(HANDLE outputHandler);
    static void drawInnerGrid(HANDLE outputHandler);
    static void drawAxis(HANDLE outputHandler);
    static void drawBoard(HANDLE outputHandler, int colorPlayer1, int colorPlayer2);
    static void drawPlayerTurn(HANDLE outputHandler, bool isPlayer1, int colorPlayer1, int colorPlayer2);
    static void setChoicePos(HANDLE outputHandler, int number);
    static void clearScreen(HANDLE outputHandler);
    static void drawMainMenu(HANDLE outputHandler);
};

#endif
