#include <iostream>
#include <vector>
#include "Generate.h"
#include "Answer.h"

using namespace std;

void print_board(vector <int >);

int main(){
    Generate NewBoard; // 產生棋盤物件
    NewBoard.get_board();
    
    //Answer a;
    //a.setTemp();

    return 0;
}

