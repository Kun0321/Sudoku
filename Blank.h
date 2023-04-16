#ifndef BLANK_H
#define BLANK_H
#include "Generate.h"
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

class Blank{
private:
    int Genboard[SIZE][SIZE];
    int x,y;//隨機刪除的座標

public:
    Generate blank();
   
};

#endif