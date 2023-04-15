#include"Sudoku.h"

void Sudoku::generate(){
    srand(time(nullptr));
    fillBoard(0, 0);
    printBoard();
}

bool Sudoku::fillBoard(int row, int col){
    if (col == 9){
        col = 0;
        row++;
    }
    if (row == 9){
        return true;
    }

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    shuffle(numbers, 9);

    for (int i = 0; i < 9; i++){
        if (isValid(row, col, numbers[i])){
            board[row][col] = numbers[i];
            if (fillBoard(row, col + 1)){
                return true;
            }
        }
    }

    board[row][col] = 0;
    return false;
}

bool Sudoku::isValid(int row, int col, int num){
    for (int i = 0; i < 9; i++){
        if (board[row][i] == num || board[i][col] == num){
            return false;
        }
    }

    int boxRow = row - row % 3;
    int boxCol = col - col % 3;

    for (int i = boxRow; i < boxRow + 3; i++){
        for (int j = boxCol; j < boxCol + 3; j++){
            if (board[i][j] == num){
                return false;
            }
        }
    }

    return true;
}

void Sudoku::shuffle(int arr[], int n){
    for (int i = n - 1; i > 0; i--){
        int j = rand() % (i + 1);
        swap(arr[i], arr[j]);
    }
}

void Sudoku::printBoard(){
    for (int row = 0; row < 9; row++){
        for (int col = 0; col < 9; col++){
            cout << board[row][col] << " ";
        }
        cout << endl;
    }
}