#pragma once

#include<iostream>
#include"board.hpp"
using namespace std;

void movePawn(uint64_t bitboard,uint64_t byOne,uint64_t byTwo, uint64_t from,uint64_t to){
    
    
}

void makeMove(board * board,string move,bool turn,bool firstMove){
    char piece = move[0];
    int moveTo = notationToBitIndex(move);
    uint64_t moveFrom;
    
    if(piece == 'K'){}
    else if(piece == 'R'){}
    else if(piece == 'Q'){}
    else if(piece == 'N'){}
    else if (piece == 'B'){}
    else{//pawn move
        if(!turn){//white's turn 
            
        }
    }
}