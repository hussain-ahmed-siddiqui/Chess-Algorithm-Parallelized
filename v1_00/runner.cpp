
#include<iostream>
#include<vector>
#include"board.hpp"
using namespace std;



int main(){

board *b = new board();

cout<<notationToBitIndex("a8");

delete b;
    
    return 0;
}