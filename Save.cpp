#include "Save.h"

using namespace std;

//Saves the current copy of the board's layout.
void Save::saveBoard(string whoStarts, PiecesType::PiecesTypeEnum boardLayout[64]){
    ofstream save("Save.txt");
    save << whoStarts << "\t";
    for (int i = 0; i < 64; i++)
        save << boardLayout[i] << "\t";
    save << "endl";
    save.close();
}

//Loads whatever board was saved in memory.
void Save::loadBoard(PiecesType::PiecesTypeEnum (&boardLayout)[64]) {
    ifstream save("Save.txt");
    string string1;
    save >> string1;
    Game::setWhoStarts(string1);
    int n;
    for(int i = 0; i < 64; i++) {
        save >> n;
        boardLayout[i] = static_cast<PiecesType::PiecesTypeEnum>(n);
    }
    save.close();

}

//Loads the config file.
void Save::loadConfig(PiecesType::PiecesTypeEnum (&boardLayout)[64]) {
    ifstream config("Config.txt");

    if (config.fail()) {
        createConfig();
        loadConfig(boardLayout);
    }

    string player;
    config >> player;
    int n;
        if (Helper::stringToLower(player) == "black") {
            Game::setWhoStarts("black");
            for (int i = 0; i < 64; i++) {
                config >> n;
                boardLayout[i] = static_cast<PiecesType::PiecesTypeEnum >(n);
            }
        } else if (Helper::stringToLower(player) == "white") {
            Game::setWhoStarts("white");
            for (int i = 63; i >= 0; i--) {
                config >> n;
                boardLayout[i] = static_cast<PiecesType::PiecesTypeEnum >(n);
            }
        }
    config.close();
}

//When called, this creates a config file
void Save::createConfig() {
    ofstream config("Config.txt");
    config << "white \t12\t16\t15\t14\t13\t15\t16\t12\t11\t11\t11\t11\t11\t11\t11\t11\t0\t0\t0\t0\t0\t0\t0\t0\t0\t0\t0\t0\t0\t0\t0\t0\t0\t0\t0\t0\t0\t0\t0\t0\t0\t0\t0\t0\t0\t0\t0\t0\t21\t21\t21\t21\t21\t21\t21\t21\t22\t26\t25\t24\t23\t25\t26\t22\tendl";
    config.close();
}