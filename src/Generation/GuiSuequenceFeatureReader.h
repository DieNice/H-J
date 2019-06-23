#ifndef H_J_GUISUEQUENCEFEATUREREADER_H
#define H_J_GUISUEQUENCEFEATUREREADER_H

const int L = 9;//число последовательностей

class ReadDTO;

class GuiSuequenceFeatureReader {
public:
    ReadDTO *read();
};

class CheckerGUIdataGeneration {
public:
    bool checkguidata();//в параметрах элементы
};

class ReadDTO {
private:
    bool sequences[L]; //последовательности
    int lengths[L]; //длины последовательностей
    //доп.данные
    bool massive_type;
    int csm;
    int swp;
    int rpt;
    int crv;
public:
    void set_sequence(bool num[L]);

    void set_lengths(int len[L]);

    void set_massive_type(bool);

    void set_scm(int);

    void set_swp(int);

    void set_rpt(int);

    void set_crv(int);

    bool *get_sequences();

    int *get_lenghts();

    bool get_massive_type();

    int get_csm();

    int get_swp();

    int get_rpt();

    int get_crv();
};

#endif //H_J_GUISUEQUENCEFEATUREREADER_H
