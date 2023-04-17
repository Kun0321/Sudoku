#ifndef FILLBLANK_H
#define FILLBLANK_H
#include "Generate.h"
class FillBlank{
private:
    int x,y,n;//x軸，y軸，填入的數字
public:
    FillBlank();//建構子
    FillBlank(int,int,int);//x軸，y軸，填入的數字
    void setX(int);
    void setY(int);
    void setN(int);
    int getX() const;
    int getY() const;
    int getN() const;

};

#endif