#pragma once
#include <iostream>

struct board {
    board(){
        // Setup initial position
        for (short i = 8; i < 16; i++) { white_pawn = setBit(white_pawn, i); }
        for (short i = 48; i < 56; i++) { black_pawn = setBit(black_pawn, i); }
        for (short i = 2; i <= 4; i += 2) { white_bishop = setBit(white_bishop, i); }
        for (short i = 58; i <= 60; i += 2) { black_bishop = setBit(black_bishop, i); }
        for (short i = 1; i <= 6; i += 5) { white_knight = setBit(white_knight, i); }
        for (short i = 57; i <= 62; i += 5) { black_knight = setBit(black_knight, i); }
        for (short i = 0; i <= 7; i += 7) { white_rook = setBit(white_rook, i); }
        for (short i = 56; i <= 63; i += 7) { black_rook = setBit(black_rook, i); }
        white_queen = setBit(white_queen, 4);
        black_queen = setBit(black_queen, 60);
        white_king = setBit(white_king, 3);
        black_king = setBit(black_king, 59);
    }
    uint64_t white_pawn = 0;
    uint64_t black_pawn = 0;
    uint64_t white_bishop = 0;
    uint64_t black_bishop = 0;
    uint64_t white_knight = 0;
    uint64_t black_knight = 0;
    uint64_t white_rook = 0;
    uint64_t black_rook = 0;
    uint64_t white_queen = 0;
    uint64_t black_queen = 0;
    uint64_t white_king = 0;
    uint64_t black_king = 0;
    
    

    
};
int notationToBitIndex(std::string to){
        int size = to.size();
        int file = 'h' - to[size-2];
        int rank = to[size-1] - '1';
        return (8*rank)+file;
    }
    // Gets bit of given position
    uint64_t getBit(uint64_t n, int pos) {
        return (n & (1ULL << pos)) != 0;
    }

    // Sets given bit position to 1
    uint64_t setBit(uint64_t n, int pos) {
        return (n | (1ULL << pos));
    }

    // Sets given bit position to 0
    uint64_t clearBit(uint64_t n, int pos) {
        return (n & ~(1ULL << pos));
    }    