//
// Created by pda on 09.06.19.
//

#ifndef H_J_GENERATOR_H
#define H_J_GENERATOR_H

#include "Reader.h"
#include "Sequences.h"

#include <string>
#include <string.h>

using namespace std;

class ResultData;

class Generator {
public:
    ResultData *generate(ReadDTO &data);
};

class ResultData {
private:
    bool massive_type;
    int **sequences[L]; //последовательности
    int lengths[L]; //длины последовательностей
};

class Writer {
public:
    void write(string namefile, ResultData &); //запись последовательностей в файл
};

#endif //H_J_GENERATOR_H
