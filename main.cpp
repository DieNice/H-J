#include <iostream>

#include "src/Generation/Generator.h"
#include "src/Generation/GuiSuequenceFeatureReader.h"

#include "src/Sorts/Sort.h"

using namespace std;

int main() {
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


/*    InterfaceSort *heapsort = new Heapsort;
    InterfaceSort *jsort = new Jsort;

    int MAX = 10000000;

    int *m = new int[MAX];

    *//*for (int i = MAX; i >= 0; i--) { m[MAX - i] = i; }*//*
    for (int i = 0; i < MAX; i++) { m[i] = rand() % MAX + 1; }

    Resultdata *res = heapsort->sorting(m, MAX);



    //for (int i = 0; i < MAX; i++) { cout << m[i] << " "; }

    cout << "swp=" << res->get_swp() << endl;
    cout << "eql=" << res->get_eql() << endl;
    cout << "time=" << res->get_time() << endl;
    return 0;*/
}