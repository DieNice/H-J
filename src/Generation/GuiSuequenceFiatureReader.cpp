#include "GuiSuequenceFeatureReader.h"
#include <string.h>

void ReadDTO::set_sequence(bool sqs[L]) {
    for (int i = 0; i < L; i++) {
        sequences[i] = sqs[i];
    }
}

void ReadDTO::set_lengths(int len[L]) {
    for (int i = 0; i < L; i++) {
        lengths[i] = len[i];
    }
}

void ReadDTO::set_scm(int c) {
    csm = c;
}

void ReadDTO::set_rpt(int r) {
    rpt = r;
}


void ReadDTO::set_swp(int s) {
    swp = s;
}

bool *ReadDTO::get_sequences() {
    return sequences;
}

int *ReadDTO::get_lenghts() {
    int *result = new int[L];
    for (int i = 0; i < L; i++) {
        result[i] = lengths[i];
    }
    return result;
}

int ReadDTO::get_rpt() {
    return rpt;
}


int ReadDTO::get_swp() {
    return swp;
}

int ReadDTO::get_csm() {
    return csm;
}

int CheckerGUIdataGeneration::checkguidata(bool *sqns, int *lens, int swp, int rpt, int csm) {
    return 0;
}