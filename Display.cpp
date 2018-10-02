#include "Display.h"

using namespace std;

//This class is the where anything related to drawing occurs.

//Default colour of text and background.
int defaultColor = 112;

//This is the ID of every position that a tile is suppose to be on.
COORD Display::ID[] = {
        {2,1}, {20,1}, {38,1}, {56,1}, {74,1}, {92,1}, {110,1}, {128,1},
        {2,10}, {20,10}, {38,10}, {56,10}, {74,10}, {92,10}, {110,10}, {128,10},
        {2,19}, {20,19}, {38,19}, {56,19}, {74,19}, {92,19}, {110,19}, {128,19},
        {2,28}, {20,28}, {38,28}, {56,28}, {74,28}, {92,28}, {110,28}, {128,28},
        {2,37}, {20,37}, {38,37}, {56,37}, {74,37}, {92,37}, {110,37}, {128,37},
        {2,46}, {20,46}, {38,46}, {56,46}, {74,46}, {92,46}, {110,46}, {128,46},
        {2,55}, {20,55}, {38,55}, {56,55}, {74,55}, {92,55}, {110,55}, {128,55},
        {2,64}, {20,64}, {38,64}, {56,64}, {74,64}, {92,64}, {110,64}, {128,64}};

//This just draws a pixel
void Display::drawPixel(HANDLE outputHandler, int color){
    SetConsoleTextAttribute(outputHandler, color);
    cout << "  ";
    SetConsoleTextAttribute(outputHandler, defaultColor);
}

//This draws a full tile and is asking for the type of tile (K,Q or Null) the colour for the background and foreground as well as its position,
void Display::drawTile(HANDLE outputHandler, COORD pos, PiecesType::PiecesTypeEnum type, int colourBG, int colourFG) {
    //The functions in the assets class return the int set in the array given the row and column.
    short posX = pos.X;
    SetConsoleCursorPosition(outputHandler, pos);
    switch (type) {
        case PiecesType::BP:
        case PiecesType::WP:
        case PiecesType::P :
            for (int y = 0; y < 8; y++) {
                for (int x = 0; x < 8; x++)
                    if (Assets::Pawn(x, y) == 1)
                        drawPixel(outputHandler, colourFG);
                    else
                        drawPixel(outputHandler, colourBG);

                pos.X = posX;
                pos.Y++;
                SetConsoleCursorPosition(outputHandler, pos);
            }
            break;
        case PiecesType::BK:
        case PiecesType::WK:
        case PiecesType::K :
            for (int y = 0; y < 8; y++) {
                for (int x = 0; x < 8; x++)
                    if (Assets::King(x, y) == 1)
                        drawPixel(outputHandler, colourFG);
                    else
                        drawPixel(outputHandler, colourBG);

                pos.X = posX;
                pos.Y++;
                SetConsoleCursorPosition(outputHandler, pos);
            }
            break;
        case PiecesType::BQ:
        case PiecesType::WQ:
        case PiecesType::Q :
            for (int y = 0; y < 8; y++) {
                for (int x = 0; x < 8; x++)
                    if (Assets::Queen(x, y) == 1)
                        drawPixel(outputHandler, colourFG);
                    else
                        drawPixel(outputHandler, colourBG);

                pos.X = posX;
                pos.Y++;
                SetConsoleCursorPosition(outputHandler, pos);
            }
            break;
        case PiecesType::BR:
        case PiecesType::WR:
        case PiecesType::R :
            for (int y = 0; y < 8; y++) {
                for (int x = 0; x < 8; x++)
                    if (Assets::Rook(x, y) == 1)
                        drawPixel(outputHandler, colourFG);
                    else
                        drawPixel(outputHandler, colourBG);

                pos.X = posX;
                pos.Y++;
                SetConsoleCursorPosition(outputHandler, pos);
            }
            break;
        case PiecesType::BB:
        case PiecesType::WB:
        case PiecesType::B :
            for (int y = 0; y < 8; y++) {
                for (int x = 0; x < 8; x++)
                    if (Assets::Bishop(x, y) == 1)
                        drawPixel(outputHandler, colourFG);
                    else
                        drawPixel(outputHandler, colourBG);

                pos.X = posX;
                pos.Y++;
                SetConsoleCursorPosition(outputHandler, pos);
            }
            break;
        case PiecesType::BN:
        case PiecesType::WN:
        case PiecesType::N :
            for (int y = 0; y < 8; y++) {
                for (int x = 0; x < 8; x++)
                    if (Assets::Knight(x, y) == 1)
                        drawPixel(outputHandler, colourFG);
                    else
                        drawPixel(outputHandler, colourBG);

                pos.X = posX;
                pos.Y++;
                SetConsoleCursorPosition(outputHandler, pos);
            }
            break;
        case PiecesType::Null:
        default:
            for (int y = 0; y < 8; y++) {
                for (int x = 0; x < 8; x++)
                    if (Assets::Blank(x, y) == 1)
                        drawPixel(outputHandler, colourFG);
                    else
                        drawPixel(outputHandler, colourBG);

                pos.X = posX;
                pos.Y++;
                SetConsoleCursorPosition(outputHandler, pos);
            }
            break;
    }
    SetConsoleTextAttribute(outputHandler, defaultColor);
}

//This draws the inner grid of tiles i.e. a1, b6 or h8.
void Display::drawInnerGrid(HANDLE outputHandler){
    //This a thing you can do with for loops if you initialize and variable with the data type of the array and put the array after a ':' you will go through all the position of the array.
    for(COORD i: ID)
        //This makes the tiles appear black or red.
        if((i.X % 4 == 0 && i.Y % 2 == 0) || (i.X % 4 != 0 && i.Y % 2 != 0))
            drawTile(outputHandler, i, PiecesType::Null, redBG, blackBG);
        else
            drawTile(outputHandler, i, PiecesType::Null, blackBG, whiteBG);
    SetConsoleTextAttribute(outputHandler, defaultColor);
}

//This draws the walls of the board.
void Display::drawGrid(HANDLE outputHandler){
    SetConsoleTextAttribute(outputHandler, 7);
    for(int k = 0; k < 8; k++) {
        for (int x = 0; x < 73; x++) {
            cout << "* ";
        }
        cout << endl;
        for (int y = 0; y < 8; y++) {
            for (int j = 0; j < 9; j++) {
                cout << "*" << setw(18);
            }
            cout << endl << setw(0);
        }
    }
    for (int x = 0; x < 73; x++) {
        SetConsoleTextAttribute(outputHandler, 7);
        cout << "* ";
    }
    SetConsoleTextAttribute(outputHandler, defaultColor);
}

//This draws the numbers and letters at the side of the board.
void Display::drawAxis(HANDLE outputHandler){
    COORD yAxisInit{147,4};
    COORD xAxisInit{8,74};

    SetConsoleCursorPosition(outputHandler, yAxisInit);
    for(int y = 8; y >= 1; y--){
        cout << y;
        yAxisInit.Y += 9;
        SetConsoleCursorPosition(outputHandler, yAxisInit);
    }

    char xAxisCar[]{'a','b','c','d','e','f','g','h'};
    SetConsoleCursorPosition(outputHandler, xAxisInit);
    for(char x : xAxisCar){
        cout << x;
        xAxisInit.X += 18;
        SetConsoleCursorPosition(outputHandler, xAxisInit);
        SetConsoleTextAttribute(outputHandler, defaultColor);
    }
}

//This draws the board on the right to show whose turn it is.
void Display::drawPlayerTurn(HANDLE outputHandler, bool isPlayer1, int colorPlayer1, int colorPlayer2) {

    bool isPlayer1Turn = isPlayer1;

    COORD playerTurnStatInit{164, 24};
    SetConsoleCursorPosition(outputHandler, playerTurnStatInit);

    for (int y = 0; y < 7; y++) {
        for (int x = 0; x < 34; x++) {
            cout << "*";
            playerTurnStatInit.X++;
        }
        playerTurnStatInit.X = 164;
        playerTurnStatInit.Y++;
        SetConsoleCursorPosition(outputHandler, playerTurnStatInit);
    }

    playerTurnStatInit.X = 165;
    playerTurnStatInit.Y = 25;
    SetConsoleCursorPosition(outputHandler, playerTurnStatInit);

    for (int y = 0; y < 5; y++) {
        for (int x = 0; x < 8; x++) {
            if(isPlayer1Turn)
                drawPixel(outputHandler, colorPlayer1);
            else
                drawPixel(outputHandler, defaultColor);
            playerTurnStatInit.X++;
        }
        playerTurnStatInit.X = 165;
        playerTurnStatInit.Y++;
        SetConsoleCursorPosition(outputHandler, playerTurnStatInit);
    }

    playerTurnStatInit.X = 167;
    playerTurnStatInit.Y = 27;
    SetConsoleCursorPosition(outputHandler, playerTurnStatInit);
    if(isPlayer1Turn)
        SetConsoleTextAttribute(outputHandler, colorPlayer1);
    cout << "Player 1";

    playerTurnStatInit.X = 181;
    playerTurnStatInit.Y = 25;
    SetConsoleCursorPosition(outputHandler, playerTurnStatInit);

    for (int y = 0; y < 5; y++) {
        for (int x = 0; x < 8; x++) {
            if(!isPlayer1Turn)
                drawPixel(outputHandler, colorPlayer2);
            else
                drawPixel(outputHandler, defaultColor);
            playerTurnStatInit.X++;
        }

        playerTurnStatInit.X = 181;
        playerTurnStatInit.Y++;
        SetConsoleCursorPosition(outputHandler, playerTurnStatInit);
    }

    playerTurnStatInit.X = 183;
    playerTurnStatInit.Y = 27;
    SetConsoleCursorPosition(outputHandler, playerTurnStatInit);
    if(!isPlayer1Turn)
        SetConsoleTextAttribute(outputHandler, colorPlayer2);
    cout << "Player 2";
}

//This sets the position of where the player types his/her move.
void Display::setChoicePos(HANDLE outputHandler, int number){
    COORD choiceCoord{0,76};
    SetConsoleCursorPosition(outputHandler, choiceCoord);
    for(int i = 0; i < number; i++)
        drawPixel(outputHandler, defaultColor);
    SetConsoleCursorPosition(outputHandler, choiceCoord);
}

//This draws the whole board and the player stats.
void Display::drawBoard(HANDLE outputHandler, int colorPlayer1, int colorPlayer2) {
    clearScreen(outputHandler);
    drawGrid(outputHandler);
    drawInnerGrid(outputHandler);
    drawAxis(outputHandler);
    drawPlayerTurn(outputHandler, true, colorPlayer1, colorPlayer2);
    setChoicePos(outputHandler, 0);
}

//This just clears the screen and resets everything back to normal.
void Display::clearScreen(HANDLE outputHandler){
    SetConsoleTextAttribute(outputHandler, defaultColor);
    system("cls");
    SetConsoleCursorPosition(outputHandler, COORD{0,0});
}

//This draws the main Menu
void Display::drawMainMenu(HANDLE outputHandler){
    clearScreen(outputHandler);
    cout << "To start a new game return NEW GAME.\nTo continue previous game return LOAD.\nFor help return HELP.\nTo exit the program return EXIT." << endl;
}

//Note: every function in this class return the text back to normal ie gives it a text attribute of defaultColor.