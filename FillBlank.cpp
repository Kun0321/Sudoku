#include"FillBlank.h"
FillBlank::FillBlank(){
    x=y=n=0;
}//x,y,n都設初始值
FillBlank::FillBlank(int nX,int nY,int nN){
    x=nX;
    y=nY;
    n=nN;
}//x軸，y軸，填入的數字
void FillBlank::setX(int nX){
    x=nX;
}
void FillBlank::setY(int nY){
    y=nY;
}
void FillBlank::setN(int nN){
    n=nN;
}
int FillBlank::getX() const{
    return x;
}
int FillBlank::getY() const{
    return y;
}
int FillBlank::getN() const{
    return n;
}