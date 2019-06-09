#include <iostream>

#include "src/Generation/Generator.h"
#include "src/Generation/Reader.h"

using namespace std;

int main() {
    Reader reader;
    Writer writer;
    Generator generator;

    writer.write("Output sequences", generator.generate(reader.read()));

    cout << "hello" << endl;
    return 0;
}