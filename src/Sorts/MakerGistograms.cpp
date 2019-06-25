//
// Created by pda on 22.06.19.
//

#include "MakerGistograms.h"

void MakerGistograms::add_seq(FilesDTO *data) {
    sequnces.push_back(data);
}

//среденее float значение
float culc_mid_valuef(float *data, int size) {
    float result = 0;
    for (int i = 0; i < size; i++) {
        result = result + data[i];
    }
    result = result - data[0] - data[size - 1];
    result = result / size;
    return result;
}

//сренее int значение
int culc_mid_value(int *data, int size) {
    float result = 0;
    for (int i = 0; i < size; i++) {
        result = result + data[i];
    }
    result = result - data[0] - data[size - 1];
    result = result / size;
    return result;
}

bool MakerGistograms::make_gistograms() {
    const int num_rpt = 10;//число тестовых запусков

    if (sequnces.empty()) { return true; }

    Heapsort heapsort;
    Jsort jsort;

    int num_sqs = sequnces.size();

    //данные для построения гистограммы
    double ResultTimesHeapsort[num_sqs];
    int ResultSwpsHeapsort[num_sqs];
    int ResultEqlsHeapsort[num_sqs];

    double ResultTimesJsort[num_sqs];
    int ResultSwpsJsort[num_sqs];
    int ResultEqlsJsort[num_sqs];

    //данные для вычисления средних значений
    double *alltimeheapsort = new double[num_rpt];
    int *allswpheapsort = new int[num_rpt];
    int *alleqlheapsort = new int[num_rpt];

    double *alltimejsort = new double[num_rpt];
    int *allswpjsort = new int[num_rpt];
    int *alleqljsort = new int[num_rpt];

    for (int i = 0; i < num_sqs; i++) {


        for (int j = 0; j < num_rpt; j++) {
            Resultdata *nowdatasortingheapsort;
            Resultdata *nowdatasortingjsort;

            nowdatasortingheapsort = heapsort.sorting(sequnces.at(i)->get_vector(), sequnces.at(i)->get_length());
            nowdatasortingjsort = jsort.sorting(sequnces.at(i)->get_vector(), sequnces.at(i)->get_length());

            alltimeheapsort[j] = nowdatasortingheapsort->get_time();
            allswpheapsort[j] = nowdatasortingheapsort->get_swp();
            alleqlheapsort[j] = nowdatasortingheapsort->get_eql();

            alltimejsort[j] = nowdatasortingjsort->get_time();
            allswpjsort[j] = nowdatasortingjsort->get_swp();
            alleqljsort[j] = nowdatasortingjsort->get_eql();
        }
        //считаем средние значения
        int num_middle_elems = num_rpt - 2;
        ResultTimesHeapsort[i] = culc_mid_valuef((float *) alltimeheapsort, num_middle_elems);
        ResultSwpsHeapsort[i] = culc_mid_value(allswpheapsort, num_middle_elems);
        ResultEqlsHeapsort[i] = culc_mid_value(alleqlheapsort, num_middle_elems);

        ResultTimesJsort[i] = culc_mid_valuef((float *) alltimejsort, num_middle_elems);
        ResultSwpsJsort[i] = culc_mid_value(allswpjsort, num_middle_elems);
        ResultEqlsJsort[i] = culc_mid_value(alleqljsort, num_middle_elems);
    }

    //строим гистрограммы
    return true;

}