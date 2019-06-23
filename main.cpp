#include <iostream>

#include "src/Generation/Generator.h"
#include "src/Generation/GuiSuequenceFeatureReader.h"

#include "src/Sorts/Sort.h"
#include "src/Sorts/MakerGistograms.h"
#include "src/Sorts/ReaderSequncesFiles.h"

using namespace std;

int main() {
/*
    GuiSuequenceFeatureReader reader;
    Writer writer;
    Generator generator;

    ReadDTO readDto;
    int lens[L] = {10, 100, 10, 10, 10, 10, 10, 10, 10};
    bool sqns[L] = {0, 0, 0, 0, 1, 0, 0, 0, 0};

    readDto.set_massive_type(0);
    readDto.set_lengths(lens);
    readDto.set_sequence(sqns);
    readDto.set_swp(1);
    readDto.set_crv(10);
    readDto.set_rpt(90);
    readDto.set_scm(3);

    generator.generate(readDto)->print();
    writer.write(*generator.generate(readDto));
*/


    ChekerSequncesFiles chekerSequncesFiles;
    ReaderSequncesFiles readerSequncesFiles;
    MakerGistograms makerGistograms;


    string filename = "1_Output_sequnces_10.sqc5";

    cout << chekerSequncesFiles.check_file(filename);
    makerGistograms.add_seq(readerSequncesFiles.readfile(filename));

    makerGistograms.make_gistograms();

    return 0;
}