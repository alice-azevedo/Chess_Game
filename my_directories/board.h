#ifndef BOARD_H
#define BOARD_H

#include "definitions.h"

void starting_board(bitboard complete_board) {

    white_pawn   = 0x000000000000FF00;  
    white_rook   = 0x0000000000000081;
    white_knight = 0x0000000000000042;
    white_bishop = 0x0000000000000024;
    white_queen  = 0x0000000000000008;
    white_king   = 0x0000000000000010;
    black_pawn   = 0x00FF000000000000;
    black_rook   = 0x8100000000000000;
    black_knight = 0x4200000000000000;
    black_bishop = 0x2400000000000000;
    black_queen  = 0x0800000000000000;
    black_king   = 0x1000000000000000;

    complete_board =
        white_pawn || white_rook || white_knight || white_bishop || white_queen || white_king 
        || black_pawn || black_rook || black_knight || black_bishop || black_queen || black_king;
    
}; 



#endif