#include <iostream>
#include <vector>
#include "Generate.h"
#include "Blank.h"
#include"FillBlank.h"
#include "Answer.h"

using namespace std;

void print_board(vector <int >);

int main(){
    Generate NewBoard; // 產生棋盤物件
    Blank blank; 
    FillBlank fillblank;
    Answer answer;

    blank.receive_board(NewBoard.get_board());
    answer.receive_original_board(NewBoard.get_board());

    int n, x, y, number;
    cout<<"請輸入想要挖多少空格？";
    cin>>n;
    while(n<0 || n > 81){
        cout<<"請重新輸入...";
        cin>>n;
    }
    
    blank.hole_board(n);
    fillblank.receive_board(blank.return_board());
    answer.receive_revise_board(fillblank.return_board());
    fillblank.get_board();
    
    while(answer.comparison()){
        cin>>x>>y>>number;
        fillblank.setX(x);
        fillblank.setY(y);
        fillblank.setN(number);
        answer.receive_revise_board(fillblank.fill());
        answer.get_board();
    }

    return 0;
}

