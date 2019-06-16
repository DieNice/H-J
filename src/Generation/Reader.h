#ifndef H_J_READER_H
#define H_J_READER_H

const int L=10;//число последовательностей

class ReadDTO;

class Reader {
public:
    ReadDTO *read();
};

class ReadDTO {
private:
    bool *sequences[L]; //последовательности
    int *lengths[L]; //длины последовательностей
    //доп.данные
    bool *massive_type;
    int *csm;
    int *swp;
    int *rpt;
    int *crv;
};

#endif //H_J_READER_H
