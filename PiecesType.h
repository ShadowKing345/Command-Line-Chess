#ifndef CHESS_PIECES_H
#define CHESS_PIECES_H

#include <iostream>

//This header class just contains the tile types and the pieces types and the variants.

class PiecesType {
public:
    enum PiecesTypeEnum{
        Null= 0,

        P=1,
        R=2,
        K=3,
        Q=4,
        N=5,
        B=6,

        WP=11,
        WR=12,
        WK=13,
        WQ=14,
        WB=15,
        WN=16,

        BP=21,
        BR=22,
        BK=23,
        BQ=24,
        BB=25,
        BN=26
    };
};


#endif
