#include "Game.h"

using namespace std;

bool isPlayer1Turn = true;
static std::string whoStarts = "white";
static int colorPlayer1 = 0, colorPlayer2 = 0;
PiecesType::PiecesTypeEnum Game::boardLayout[64];

//Loads the board set in the config file and draws it.
void Game::loadDefaultBoard(HANDLE outputHandler) {
    setPlayerColors();
    isPlayer1Turn = true;
    Display::drawBoard(outputHandler, colorPlayer1, colorPlayer2);
    Save::loadConfig(boardLayout);
    for (int i = 0; i < 64; i++) {
        switch (boardLayout[i]) {
            case PiecesType::BP:
            case PiecesType::BR:
            case PiecesType::BK:
            case PiecesType::BQ:
            case PiecesType::BB:
            case PiecesType::BN:
                if ((Display::ID[i].X % 4 == 0 && Display::ID[i].Y % 2 == 0) ||
                    (Display::ID[i].X % 4 != 0 && Display::ID[i].Y % 2 != 0))
                    Display::drawTile(outputHandler, Display::ID[i], boardLayout[i], Display::redBG, Display::blackBG);
                else
                    Display::drawTile(outputHandler, Display::ID[i], boardLayout[i], Display::blackBG, Display::redBG);
                break;

            case PiecesType::WP:
            case PiecesType::WR:
            case PiecesType::WK:
            case PiecesType::WQ:
            case PiecesType::WB:
            case PiecesType::WN:
                if ((Display::ID[i].X % 4 == 0 && Display::ID[i].Y % 2 == 0) ||
                    (Display::ID[i].X % 4 != 0 && Display::ID[i].Y % 2 != 0))
                    Display::drawTile(outputHandler, Display::ID[i], boardLayout[i], Display::redBG, Display::whiteBG);
                else
                    Display::drawTile(outputHandler, Display::ID[i], boardLayout[i], Display::blackBG, Display::whiteBG);
                break;
            default:
                if ((Display::ID[i].X % 4 == 0 && Display::ID[i].Y % 2 == 0) ||
                    (Display::ID[i].X % 4 != 0 && Display::ID[i].Y % 2 != 0))
                    Display::drawTile(outputHandler, Display::ID[i], boardLayout[i], Display::redBG, Display::blackBG);
                else
                    Display::drawTile(outputHandler, Display::ID[i], boardLayout[i], Display::blackBG, Display::redBG);
                break;
        }
    }
    Display::setChoicePos(outputHandler, 0);
}

//Loads the board saved.
void Game::loadSaveBoard(HANDLE outputHandler){
    isPlayer1Turn = true;
    setPlayerColors();
    Save::loadBoard(boardLayout);
    Display::drawBoard(outputHandler, colorPlayer1, colorPlayer2);
    for (int i = 0; i < 64; i++) {
        switch (boardLayout[i]) {
            case PiecesType::BP:
            case PiecesType::BR:
            case PiecesType::BK:
            case PiecesType::BQ:
            case PiecesType::BB:
            case PiecesType::BN:
                if ((Display::ID[i].X % 4 == 0 && Display::ID[i].Y % 2 == 0) ||
                    (Display::ID[i].X % 4 != 0 && Display::ID[i].Y % 2 != 0))
                    Display::drawTile(outputHandler, Display::ID[i], boardLayout[i], Display::redBG, Display::blackBG);
                else
                    Display::drawTile(outputHandler, Display::ID[i], boardLayout[i], Display::blackBG, Display::redBG);
                break;

            case PiecesType::WP:
            case PiecesType::WR:
            case PiecesType::WK:
            case PiecesType::WQ:
            case PiecesType::WB:
            case PiecesType::WN:
                if ((Display::ID[i].X % 4 == 0 && Display::ID[i].Y % 2 == 0) ||
                    (Display::ID[i].X % 4 != 0 && Display::ID[i].Y % 2 != 0))
                    Display::drawTile(outputHandler, Display::ID[i], boardLayout[i], Display::redBG, Display::whiteBG);
                else
                    Display::drawTile(outputHandler, Display::ID[i], boardLayout[i], Display::blackBG, Display::whiteBG);
                break;
            default:
                if ((Display::ID[i].X % 4 == 0 && Display::ID[i].Y % 2 == 0) ||
                    (Display::ID[i].X % 4 != 0 && Display::ID[i].Y % 2 != 0))
                    Display::drawTile(outputHandler, Display::ID[i], boardLayout[i], Display::redBG, Display::blackBG);
                else
                    Display::drawTile(outputHandler, Display::ID[i], boardLayout[i], Display::blackBG, Display::redBG);
                break;
        }
    }
    Display::setChoicePos(outputHandler, 0);
}

//This redraws the current board.
void Game::reloadBoard(HANDLE outputHandler) {
    setPlayerColors();
    isPlayer1Turn = true;
    Display::drawBoard(outputHandler, colorPlayer1, colorPlayer2);
    for (int i = 0; i < 64; i++) {
        switch (boardLayout[i]) {
            case PiecesType::BP:
            case PiecesType::BR:
            case PiecesType::BK:
            case PiecesType::BQ:
            case PiecesType::BB:
            case PiecesType::BN:
                if ((Display::ID[i].X % 4 == 0 && Display::ID[i].Y % 2 == 0) ||
                    (Display::ID[i].X % 4 != 0 && Display::ID[i].Y % 2 != 0))
                    Display::drawTile(outputHandler, Display::ID[i], boardLayout[i], Display::redBG, Display::blackBG);
                else
                    Display::drawTile(outputHandler, Display::ID[i], boardLayout[i], Display::blackBG, Display::redBG);
                break;

            case PiecesType::WP:
            case PiecesType::WR:
            case PiecesType::WK:
            case PiecesType::WQ:
            case PiecesType::WB:
            case PiecesType::WN:
                if ((Display::ID[i].X % 4 == 0 && Display::ID[i].Y % 2 == 0) ||
                    (Display::ID[i].X % 4 != 0 && Display::ID[i].Y % 2 != 0))
                    Display::drawTile(outputHandler, Display::ID[i], boardLayout[i], Display::redBG, Display::whiteBG);
                else
                    Display::drawTile(outputHandler, Display::ID[i], boardLayout[i], Display::blackBG, Display::whiteBG);
                break;
            default:
                if ((Display::ID[i].X % 4 == 0 && Display::ID[i].Y % 2 == 0) ||
                    (Display::ID[i].X % 4 != 0 && Display::ID[i].Y % 2 != 0))
                    Display::drawTile(outputHandler, Display::ID[i], boardLayout[i], Display::redBG, Display::blackBG);
                else
                    Display::drawTile(outputHandler, Display::ID[i], boardLayout[i], Display::blackBG, Display::redBG);
                break;
        }
    }
    Display::setChoicePos(outputHandler, 0);
}

//Gets the id from the initial tile to the final tile.
void Game::getPosID(string cords, int &pos1, int &pos2) {
    if(cords.find(' ') != string::npos)
        Helper::removeLetter(cords, ' ');
    if(cords.find(',') != string::npos)
        Helper::removeLetter(cords, ',');
    if(cords.find('(') != string::npos)
        Helper::removeLetter(cords, '(');
    if(cords.find(')') != string::npos)
        Helper::removeLetter(cords, ')');
    if(cords.find('/') != string::npos)
        Helper::removeLetter(cords, '/');

    if (cords.size() < 4) {
        pos1 = 0;
        pos2 = 0;
        return;
    }
    pos1 = Helper::getBoardNumber(cords.substr(0, 2));
    pos2 = Helper::getBoardNumber(cords.substr(2,3));
}

//Moves a piece from a to b.
void Game::movePiece(HANDLE outputHandler, int beginPos, int finalPos){
    switch (boardLayout[beginPos]) {
        case PiecesType::BP:
        case PiecesType::BR:
        case PiecesType::BK:
        case PiecesType::BQ:
        case PiecesType::BB:
        case PiecesType::BN:
            if ((Display::ID[finalPos].X % 4 == 0 && Display::ID[finalPos].Y % 2 == 0) ||
                (Display::ID[finalPos].X % 4 != 0 && Display::ID[finalPos].Y % 2 != 0))
                Display::drawTile(outputHandler, Display::ID[finalPos], boardLayout[beginPos], Display::redBG, Display::blackBG);
            else
                Display::drawTile(outputHandler, Display::ID[finalPos], boardLayout[beginPos], Display::blackBG, Display::redBG);
            break;

        case PiecesType::WP:
        case PiecesType::WR:
        case PiecesType::WK:
        case PiecesType::WQ:
        case PiecesType::WB:
        case PiecesType::WN:
            if ((Display::ID[finalPos].X % 4 == 0 && Display::ID[finalPos].Y % 2 == 0) ||
                (Display::ID[finalPos].X % 4 != 0 && Display::ID[finalPos].Y % 2 != 0))
                Display::drawTile(outputHandler, Display::ID[finalPos], boardLayout[beginPos], Display::redBG, Display::whiteBG);
            else
                Display::drawTile(outputHandler, Display::ID[finalPos], boardLayout[beginPos], Display::blackBG, Display::whiteBG);
            break;
        default:
            if ((Display::ID[finalPos].X % 4 == 0 && Display::ID[finalPos].Y % 2 == 0) ||
                (Display::ID[finalPos].X % 4 != 0 && Display::ID[finalPos].Y % 2 != 0))
                Display::drawTile(outputHandler, Display::ID[finalPos], PiecesType::Null, Display::redBG, Display::whiteBG);
            else
                Display::drawTile(outputHandler, Display::ID[finalPos], PiecesType::Null, Display::blackBG, Display::whiteBG);
            break;
    }

    boardLayout[finalPos] = boardLayout[beginPos];
    boardLayout[beginPos] = PiecesType::Null;

    if ((Display::ID[beginPos].X % 4 == 0 && Display::ID[beginPos].Y % 2 == 0) ||
        (Display::ID[beginPos].X % 4 != 0 && Display::ID[beginPos].Y % 2 != 0))
        Display::drawTile(outputHandler, Display::ID[beginPos], PiecesType::Null, Display::redBG, Display::whiteBG);
    else
        Display::drawTile(outputHandler, Display::ID[beginPos], PiecesType::Null, Display::blackBG, Display::whiteBG);
}

//Just changes who's turn it is.
void Game::changePlayer(HANDLE outputHandler){
    isPlayer1Turn = !isPlayer1Turn;
    Display::drawPlayerTurn(outputHandler, isPlayer1Turn, colorPlayer1, colorPlayer2);
}

//This checks if the move is valid.
bool Game::isMoveValid(int beginPos, int finalPos){
    PiecesType::PiecesTypeEnum move = boardLayout[beginPos];
    switch (move){
        case PiecesType::WP:
        case PiecesType::BP:
        case PiecesType::P:
            return PieceLogic::pawn(beginPos, finalPos, boardLayout);
        case PiecesType::WK:
        case PiecesType::BK:
        case PiecesType::K:
            return PieceLogic::king(beginPos, finalPos);
        case PiecesType::WQ:
        case PiecesType::BQ:
        case PiecesType::Q:
            return PieceLogic::queen(beginPos, finalPos, boardLayout);
        case PiecesType::WR:
        case PiecesType::BR:
        case PiecesType::R:
            return PieceLogic::rook(beginPos, finalPos, boardLayout);
        case PiecesType::WB:
        case PiecesType::BB:
        case PiecesType::B:
            return PieceLogic::bishop(beginPos, finalPos, boardLayout);
        case PiecesType::WN:
        case PiecesType::BN:
        case PiecesType::N:
            return PieceLogic::knight(beginPos, finalPos);
        case PiecesType::Null:
        default:
            return false;
    }
}

//The game.
void Game::GAME(HANDLE outputHandler){
    string move;
    int pos1, pos2;

    do{
        getline(cin, move);
        move = Helper::stringToLower(move);
        Game::getPosID(move, pos1, pos2);
        if(move == "newgame" || move == "new game" || move == "new_game") {
            cout << "Are you sure? Y for yes or N for no" << endl;
            getline(cin, move);
            move = Helper::stringToLower(move);
            if (move == "y") {
                loadDefaultBoard(outputHandler);
                continue;
            } else
                continue;
        } else if(move == "save") {
            cout << "Are you sure? Y for yes or N for no" << endl;
            getline(cin, move);
            move = Helper::stringToLower(move);
            if (move == "y") {
                reloadBoard(outputHandler);
                Save::saveBoard(whoStarts, boardLayout);
                continue;
            } else
                continue;
        } else if(move == "load"){
            cout << "Are you sure? Y for yes or N for no" << endl;
            getline(cin, move);
            move = Helper::stringToLower(move);
            if(move == "y") {
                loadSaveBoard(outputHandler);
                continue;
            } else
                continue;
        } else if(move == "help"){
            Display::clearScreen(outputHandler);
            cout << "To play the game all you have to do is return the coordinate for the piece say B1 and the coordinate where you want to place the piece A3.\nThey can be written in b1/a6 or b1,a6.\nNote: if you set the coordinate the the same place it is considered an invalid move." << endl;            system("pause");
            reloadBoard(outputHandler);
            continue;
        }
        boardLayout[pos1] = boardLayout[pos1];
        if(isMoveValid(pos1, pos2)) {
            movePiece(outputHandler, pos1, pos2);
            changePlayer(outputHandler);
        } else {
            cout << "Invalid Move!";
        }
        Display::setChoicePos(outputHandler, move.size());
    }while (move != "exit");
}

//Sets who starts.
void Game::setWhoStarts(std::string string) {
    whoStarts = string;
}

//This just sets the player stats colors.
void Game::setPlayerColors(){
    if(whoStarts == "black"){
        colorPlayer1 = Display::redBG + 11;
        colorPlayer2 = Display::whiteBG;
    }else if(whoStarts == "white"){
        colorPlayer1 = Display::whiteBG;
        colorPlayer2 = Display::redBG + 11;
    }
}