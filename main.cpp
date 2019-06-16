#include <iostream>

#include "src/Generation/Generator.h"
#include "src/Generation/Reader.h"

#include "src/Sorts/AbsractSort.h"

using namespace std;

int main() {
    Reader reader;
    Writer writer;
    Generator generator;

    //writer.write("Output sequences", generator.generate(reader.read()));


    AbstractSort *heapsort = new Heapsort;
    AbstractSort *jsort = new Jsort;

    int MAX = 10000000;

    int *m = new int[MAX];

    /*for (int i = MAX; i >= 0; i--) { m[MAX - i] = i; }*/
    for (int i = 0; i < MAX; i++) { m[i] = rand() % MAX + 1; }

    Resultdata *res = heapsort->sorting(m, MAX);



    //for (int i = 0; i < MAX; i++) { cout << m[i] << " "; }

    cout << "swp=" << res->get_swp() << endl;
    cout << "eql=" << res->get_eql() << endl;
    cout << "time=" << res->get_time() << endl;
    return 0;
}