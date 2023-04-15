#ifndef SUDOKU_H
#define SUDOKU_H

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Sudoku{
public:
    void generate();
    
private:
    int board[9][9];

    bool fillBoard(int row, int col);

    bool isValid(int row, int col, int num);

    void shuffle(int arr[], int n);

    void printBoard();
};

#endif