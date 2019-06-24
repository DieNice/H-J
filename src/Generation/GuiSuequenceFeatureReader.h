#ifndef H_J_GUISUEQUENCEFEATUREREADER_H
#define H_J_GUISUEQUENCEFEATUREREADER_H

const int L = 8;//число последовательностей

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
    int csm;
    int swp;
    int rpt;
public:
    void set_sequence(bool num[L]);

    void set_lengths(int len[L]);

    void set_scm(int);

    void set_swp(int);

    void set_rpt(int);

    bool *get_sequences();

    int *get_lenghts();


    int get_csm();

    int get_swp();

    int get_rpt();
};

#endif //H_J_GUISUEQUENCEFEATUREREADER_H
