//
// Created by pda on 09.06.19.
//

#ifndef H_J_GENERATOR_H
#define H_J_GENERATOR_H

#include "Reader.h"
#include <string.h>

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
    void write(std::string namefile, ResultData &); //запись последовательностей в файл
};

#endif //H_J_GENERATOR_H
