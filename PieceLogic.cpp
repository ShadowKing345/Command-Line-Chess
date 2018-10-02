#include "PieceLogic.h"

//This class contains the logic from the movement of the pieces.

bool PieceLogic::pawn(int id1, int id2, PiecesType::PiecesTypeEnum boardLayout[]) {
    COORD pos1 = Display::ID[id1];
    COORD pos2 = Display::ID[id2];
    int difX = abs(pos1.X) - abs(pos2.X);
    int difY = abs(pos1.Y) - abs(pos2.Y);

    if(boardLayout[id2] != PiecesType::Null) {
        if (difX/2 == abs(difY) <= 9)
            return true;

        if (difX/2 == -abs(difY) <= 9)
            return true;
    }

    //This verifies if there is a piece on the Y axis for the pieces path.
    if (difX == 0 && difY <= 18) {
        if (difY > 0)
            for (int i = 1; i < difY / 9 - 1; i++)
                if (boardLayout[id1 - 8 * i] != PiecesType::Null)
                    return false;

        if (difY < 0)
            for (int i = -1; i > difY / 9; i--)
                if (boardLayout[id1 - 8 * i] != PiecesType::Null)
                    return false;
    }

    return (difX == 0 && difY <= 20) && id1 != id2;
}

bool PieceLogic::king(int id1, int id2) {
    COORD pos1 = Display::ID[id1];
    COORD pos2 = Display::ID[id2];
    int difX = abs(pos1.X) - abs(pos2.X);
    int difY = abs(pos1.Y) - abs(pos2.Y);

    return ((abs(difX)/2 == abs(difY)) <= 10 ||
           (abs(difX)/2 == -abs(difY)) <= 10 ||
           (difX == 0 && difY <= 10) ||
           (difY == 0 && difX <= 10)) &&
            id1 != id2;
}

bool PieceLogic::queen(int id1, int id2, PiecesType::PiecesTypeEnum boardLayout[]) {
    COORD pos1 = Display::ID[id1];
    COORD pos2 = Display::ID[id2];
    int difX = abs(pos1.X) - abs(pos2.X);
    int difY = abs(pos1.Y) - abs(pos2.Y);

    //This verifies if there is a piece on the Y axis for the pieces path.
    if (difX == 0) {
        if (difY > 0)
            for (int i = 1; i < difY / 9 - 1; i++)
                if (boardLayout[id1 - 8 * i] != PiecesType::Null)
                    return false;

        if (difY < 0)
            for (int i = -1; i > difY / 9; i--)
                if (boardLayout[id1 - 8 * i] != PiecesType::Null)
                    return false;
    }

    //This verifies if there is a piece on the X axis for the pieces path.
    if(difY == 0){
        if (difX > 0)
            for (int i = 1; i < difX / 18 - 1; i++)
                if (boardLayout[id1 + 8 * i] != PiecesType::Null)
                    return false;

        if (difX < 0)
            for (int i = -1; i > difX / 18; i--)
                if (boardLayout[id1 - 8 * i] != PiecesType::Null)
                    return false;
    }

    //This verifies if there is a piece on the positive diagonal for the pieces path.
    if(difX/2 == difY) {
        if (difX > 0 && difY > 0)
            for (int i = 1; i > 8; i++) {
                if (id1 - 7 * i < 0) break;
                if (boardLayout[id1 - 7 * i] != PiecesType::Null)
                    return false;
            }

        if (difX < 0 && difY < 0)
            for (int i = 1; i < 8; i++) {
                if (id1 - 7 * i > 63) break;
                if (boardLayout[id1 + 7 * i] != PiecesType::Null)
                    return false;
            }
    }

    //This verifies if there is a piece on the negative diagonal for the pieces path.
    if(difX/2 == -difY){

        if (difX < 0 && difY > 0)
            for (int i = 1; i < 8; i++) {
                if (id1 - 7 * i > 63) break;
                if (boardLayout[id1 + 9 * i] != PiecesType::Null)
                    return false;
            }

        if (difX > 0 && difY < 0)
            for (int i = 1; i < 8; i++) {
                if (id1 - 7 * i < 0) break;
                if (boardLayout[id1 - 9 * i] != PiecesType::Null)
                    return false;
            }
    }

    return (abs(difX)/2 == abs(difY) ||
           abs(difX)/2 == -abs(difY) ||
           difX == 0 ||
           difY == 0) &&
           id1 != id2;
}

bool PieceLogic::knight(int id1, int id2) {
    COORD pos1 = Display::ID[id1];
    COORD pos2 = Display::ID[id2];
    int difX = abs(pos1.X) - abs(pos2.X);
    int difY = abs(pos1.Y) - abs(pos2.Y);

    return (difY == 3 * difX/2 ||
       difY == -3 * difX/2 ||
       difX/2 == 3 * difY ||
       difX/2 == -3 * difY) &&
       id1 != id2;
}

bool PieceLogic::rook(int id1, int id2, PiecesType::PiecesTypeEnum boardLayout[]) {
    COORD pos1 = Display::ID[id1];
    COORD pos2 = Display::ID[id2];
    int difX = abs(pos1.X) - abs(pos2.X);
    int difY = abs(pos1.Y) - abs(pos2.Y);

    //This verifies if there is a piece on the Y axis for the pieces path.
    if (difX == 0) {
        if (difY > 0)
            for (int i = 1; i < difY / 9 - 1; i++)
                if (boardLayout[id1 - 8 * i] != PiecesType::Null)
                    return false;

        if (difY < 0)
            for (int i = -1; i > difY / 9; i--)
                if (boardLayout[id1 - 8 * i] != PiecesType::Null)
                    return false;
    }

    //This verifies if there is a piece on the X axis for the pieces path.
    if(difY == 0){
        if (difX > 0)
            for (int i = 1; i < difX / 18 - 1; i++)
                if (boardLayout[id1 + 8 * i] != PiecesType::Null)
                    return false;

        if (difX < 0)
            for (int i = -1; i > difX / 18; i--)
                if (boardLayout[id1 - 8 * i] != PiecesType::Null)
                    return false;
    }

    return (difX == 0 ||
           difY == 0) &&
           id1 != id2;
}

bool PieceLogic::bishop(int id1, int id2, PiecesType::PiecesTypeEnum boardLayout[]) {
    COORD pos1 = Display::ID[id1];
    COORD pos2 = Display::ID[id2];
    int difX = abs(pos1.X) - abs(pos2.X);
    int difY = abs(pos1.Y) - abs(pos2.Y);

    //This verifies if there is a piece on the positive diagonal for the pieces path.
    if(difX/2 == difY) {
        if (difX > 0 && difY > 0)
            for (int i = 1; i > 8; i++) {
                if (id1 - 7 * i < 0) break;
                if (boardLayout[id1 - 7 * i] != PiecesType::Null)
                    return false;
            }

        if (difX < 0 && difY < 0)
            for (int i = 1; i < 8; i++) {
                if (id1 - 7 * i > 63) break;
                if (boardLayout[id1 + 7 * i] != PiecesType::Null)
                    return false;
            }
    }

    //This verifies if there is a piece on the negative diagonal for the pieces path.
    if(difX/2 == -difY){

        if (difX < 0 && difY > 0)
            for (int i = 1; i < 8; i++) {
                if (id1 - 7 * i > 63) break;
                if (boardLayout[id1 + 9 * i] != PiecesType::Null)
                    return false;
            }

        if (difX > 0 && difY < 0)
            for (int i = 1; i < 8; i++) {
                if (id1 - 7 * i < 0) break;
                if (boardLayout[id1 - 9 * i] != PiecesType::Null)
                    return false;
            }
    }

    return (abs(difX)/2 == abs(difY) ||
           abs(difX)/2 == -abs(difY)) &&
           id1 != id2;
}