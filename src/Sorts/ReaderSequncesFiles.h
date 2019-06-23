//
// Created by pda on 22.06.19.
//

#ifndef H_J_READERSEQUNCESFILES_H
#define H_J_READERSEQUNCESFILES_H

#include <string>
#include <string.h>
#include <iostream>
#include <fstream>

#include <stdlib.h>

using namespace std;

class FilesDTO {
private:
    int length;
    int *vector;
public:
    void set_length(int);

    void set_vector(int *);

    int get_length();

    int *get_vector();
};

class ReaderSequncesFiles {
public:
    FilesDTO *readfile(string filename);
};

enum errors {
    ERRORFILENAME = 1, ERRORSIZE, NOEXISTS, NEGATIVEVALUE
};

class ChekerSequncesFiles {
public:
    int check_file(string filename);
};

#endif //H_J_READERSEQUNCESFILES_H
