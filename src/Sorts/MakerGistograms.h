//
// Created by pda on 22.06.19.
//

#ifndef H_J_MAKERGISTOGRAMS_H
#define H_J_MAKERGISTOGRAMS_H

#include "ReaderSequncesFiles.h"
#include "Sort.h"
#include <vector>


class MakerGistograms {
private:
    vector<FilesDTO *> sequnces;
public:
    void add_seq(FilesDTO *data);

    bool make_gistograms();

};


#endif //H_J_MAKERGISTOGRAMS_H
