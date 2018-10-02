#ifndef CHESS_PIECELOGIC_H
#define CHESS_PIECELOGIC_H

#include "Display.h"
#include "Game.h"
#include "PiecesType.h"

class PieceLogic {
public:
    static bool pawn(int id1, int id2, PiecesType::PiecesTypeEnum boardLayout[]);
    static bool king(int id1, int id2);
    static bool queen(int id1, int id2, PiecesType::PiecesTypeEnum boardLayout[]);
    static bool knight(int id1, int id2);
    static bool rook(int id1, int id2, PiecesType::PiecesTypeEnum boardLayout[]);
    static bool bishop(int id1, int id2, PiecesType::PiecesTypeEnum boardLayout[]);
};

#endif