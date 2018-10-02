#ifndef CHESS_GAME_H
#define CHESS_GAME_H

#include "PiecesType.h"
#include "Save.h"
#include <windows.h>
#include <iostream>
#include "Display.h"
#include "PieceLogic.h"

class Game {
public:
    static void setWhoStarts(std::string string);
    static PiecesType::PiecesTypeEnum boardLayout[];
    static void loadDefaultBoard(HANDLE outputHandler);
    static void loadSaveBoard(HANDLE outputHandler);
    static void reloadBoard(HANDLE outputHandler);
    static void getPosID(std::string cords, int &pos1, int &pos2);
    static void movePiece(HANDLE outputHandler, int beginPos, int finalPos);
    static bool isMoveValid(int beginPos, int finalPos);
    static void changePlayer(HANDLE outputHandler);
    static void GAME(HANDLE outputHandler);
    static void setPlayerColors();
};

#endif
