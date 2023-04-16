#ifndef ANSWER_H
#define ANSWER_H
#include "Generate.h"

class Answer{
private:
    vector<int > board;
    Generate temp;
public:
    Answer();
    void setTemp(Generate);
    Generate getTemp();
};

#endif