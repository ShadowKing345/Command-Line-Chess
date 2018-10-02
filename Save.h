#ifndef CHESS_SAVE_H
#define CHESS_SAVE_H

#include <fstream>
#include "PiecesType.h"
#include "Helper.h"

class Save {
public:
    static void saveBoard(std::string whoStarts, PiecesType::PiecesTypeEnum boardLayout[64]);
    static void loadBoard(PiecesType::PiecesTypeEnum (&boardLayout)[64]);
    static void loadConfig(PiecesType::PiecesTypeEnum (&boardLayout)[64]);
    static void createConfig();
};

#endif