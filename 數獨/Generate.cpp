#include "Generate.h"
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;


Generate::Generate() {// 建構子(Constructor)
    srand(time(NULL)); //以物件初始化時間設定為亂數種子
    generator(); //以亂數方法產生數獨棋盤
}

void Generate::generator() {//亂數法產生新棋盤
    int tmp; //置換用暫存變數
    int numtmp[9] = {1,2,3,4,5,6,7,8,9}; //9宮格內的數字
    vector <int> board(81); //棋盤
    bool check = false; //表示棋盤是否成功產生

    for (i=0;i<81;i++){
        board[i] = 0; //初始化棋盤(填入0)
    }
    for (i=0;i<9;i++){ //先填入左上角9宮格
        board[i/3*9+i%3] = numtmp[i];
        //    1 2 3 
        //    4 5 6
        //    7 8 9

        // 1 2 3 4 5 6 7 8 9 10 11 12 13
        // 1 2 3              4  5  6  
    }

    while(!check) { //不斷嘗試直到符合規則的棋盤產生
//  填入數字函式，嘗試失敗超過1000次會回傳false值
        check = board_put(board);
    }

    for (i=0;i<9;i++) { //將1-9的數字順序打亂
        j = rand() % 9;
        tmp = numtmp[i];
        numtmp[i] = numtmp[j];
        numtmp[j] = tmp;
    }

    for(i=0;i<81;i++) { //將棋盤的數字序置換為新產生的數字序
        board[i] = numtmp[board[i]-1];
    }

    for (i=0;i<SIZE;i++) //將結果寫入new_board變數
        for (j=0;j<SIZE;j++){
            new_board[i][j] = board[i*SIZE+j];
        }

}

vector <int > Generate::get_board(){ //輸出棋盤至vector變數
    vector < int > out_board (SIZE*SIZE);
    for (i=0;i<SIZE;i++)
        for (j=0;j<SIZE;j++)
        {
            out_board[i*SIZE+j] = new_board[i][j];
        }

    
    // for( int i=0 ;i < out_board.size() ; i++ ){
    //     cout << out_board[i] << ' ';
    //     if((i+1) % 9 == 0){
    //         cout << endl;
    //    }
    // }
    // cout << endl;
    
    return out_board;
}
