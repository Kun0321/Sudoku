#include <iostream>
#include <vector>
#include "Generate.h"
#include "Blank.h"
#include"FillBlank.h"
#include "Answer.h"

using namespace std;

void print_board(vector <int >);

int main(){
    int n, x, y, number;
    cout<<"請輸入想要挖多少空格？";
    cin>>n;
    while(n<0 || n > 81){
        cout<<"請重新輸入...";
        cin>>n;
    }
    Generate NewBoard; // 產生棋盤物件
    Blank blank;
    FillBlank fillblank;
    Answer answer;}
