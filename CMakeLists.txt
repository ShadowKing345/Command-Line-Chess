cmake_minimum_required(VERSION 3.9)
project(Chess)

set(CMAKE_CXX_STANDARD 11)
add_executable(Chess main.cpp Assets.cpp Assets.h PiecesType.h Display.cpp Display.h Helper.cpp Helper.h Game.cpp Game.h Save.cpp Save.h PieceLogic.cpp PieceLogic.h)
