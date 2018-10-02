#include "Assets.h"


//This file contains the binary data for the pieces of chess including the blank tiles.
int Assets::Blank(int x, int y) {
    int layer1[]{0,0,0,0,0,0,0,0};
    int layer2[]{0,0,0,0,0,0,0,0};
    int layer3[]{0,0,0,0,0,0,0,0};
    int layer4[]{0,0,0,0,0,0,0,0};
    int layer5[]{0,0,0,0,0,0,0,0};
    int layer6[]{0,0,0,0,0,0,0,0};
    int layer7[]{0,0,0,0,0,0,0,0};
    int layer8[]{0,0,0,0,0,0,0,0};
    int *matrix[]{layer1, layer2, layer3, layer4, layer5, layer6, layer7, layer8};
    return matrix[y][x];
}

int Assets::Pawn(int x, int y) {
    int layer1[]{0,0,0,0,0,0,0,0};
    int layer2[]{0,0,0,0,0,0,0,0};
    int layer3[]{0,0,0,1,1,0,0,0};
    int layer4[]{0,0,1,1,1,1,0,0};
    int layer5[]{0,0,0,1,1,0,0,0};
    int layer6[]{0,0,1,1,1,1,0,0};
    int layer7[]{0,1,1,1,1,1,1,0};
    int layer8[]{1,1,1,1,1,1,1,1};
    int *matrix[]{layer1, layer2, layer3, layer4, layer5, layer6, layer7, layer8};
    return matrix[y][x];
}

int Assets::King(int x, int y) {
    int layer1[]{0,1,0,1,1,0,1,0};
    int layer2[]{0,1,1,1,1,1,1,0};
    int layer3[]{0,0,1,1,1,1,0,0};
    int layer4[]{0,0,0,1,1,0,0,0};
    int layer5[]{0,0,0,1,1,0,0,0};
    int layer6[]{0,0,1,1,1,1,0,0};
    int layer7[]{0,1,1,1,1,1,1,0};
    int layer8[]{1,1,1,1,1,1,1,1};
    int *matrix[]{layer1, layer2, layer3, layer4, layer5, layer6, layer7, layer8};
    return matrix[y][x];
}

int Assets::Queen(int x, int y) {
    int layer1[]{0,0,0,1,1,0,0,0};
    int layer2[]{0,1,1,1,1,1,1,0};
    int layer3[]{0,0,1,1,1,1,0,0};
    int layer4[]{0,0,0,1,1,0,0,0};
    int layer5[]{0,0,0,1,1,0,0,0};
    int layer6[]{0,0,1,1,1,1,0,0};
    int layer7[]{0,1,1,1,1,1,1,0};
    int layer8[]{1,1,1,1,1,1,1,1};
    int *matrix[]{layer1, layer2, layer3, layer4, layer5, layer6, layer7, layer8};
    return matrix[y][x];
}

int Assets::Knight(int x, int y) {
    int layer1[]{0,0,0,0,0,0,0,0};
    int layer2[]{0,0,0,1,1,1,0,0};
    int layer3[]{0,0,1,1,1,1,1,0};
    int layer4[]{0,1,1,1,1,1,1,0};
    int layer5[]{0,0,0,0,1,1,1,0};
    int layer6[]{0,0,0,1,1,1,0,0};
    int layer7[]{0,0,1,1,1,1,1,0};
    int layer8[]{1,1,1,1,1,1,1,1};
    int *matrix[]{layer1, layer2, layer3, layer4, layer5, layer6, layer7, layer8};
    return matrix[y][x];
}

int Assets::Bishop(int x, int y) {
    int layer1[]{0,0,0,0,0,0,0,0};
    int layer2[]{0,0,0,1,1,0,0,0};
    int layer3[]{0,0,1,1,1,1,0,0};
    int layer4[]{0,0,1,1,1,1,0,0};
    int layer5[]{0,0,0,1,1,0,0,0};
    int layer6[]{0,0,1,1,1,1,0,0};
    int layer7[]{0,1,1,1,1,1,1,0};
    int layer8[]{1,1,1,1,1,1,1,1};
    int *matrix[]{layer1, layer2, layer3, layer4, layer5, layer6, layer7, layer8};
    return matrix[y][x];
}

int Assets::Rook(int x, int y) {
    int layer1[]{0,0,0,0,0,0,0,0};
    int layer2[]{0,1,0,1,1,0,1,0};
    int layer3[]{0,1,0,1,1,0,1,0};
    int layer4[]{0,1,1,1,1,1,1,0};
    int layer5[]{0,0,1,1,1,1,0,0};
    int layer6[]{0,0,1,1,1,1,0,0};
    int layer7[]{0,1,1,1,1,1,1,0};
    int layer8[]{1,1,1,1,1,1,1,1};
    int *matrix[]{layer1, layer2, layer3, layer4, layer5, layer6, layer7, layer8};
    return matrix[y][x];
}