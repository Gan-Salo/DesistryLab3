#include <iostream>
#include <Windows.h>
#include "Usluga.h"
#include "Doctor.h"
#include "Patient.h"
#include "Cabinet.h"
#include "Zapis.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Cabinet test_cab1, test_cab2;
    test_cab2.vvod();
    test_cab1.print();
    test_cab2.print();

    int n = 3;
    Cabinet test_cab3[4];
    

    Cabinet* test_cab4 = new Cabinet[n];
    for (int i = 0; i < n; i++)
    {
        test_cab4[i].print();
    }

    delete[] test_cab4;

    /*Usluga test_usl1, test_usl2;
    test_usl1.init();
    test_usl2.vvod();
    test_usl1.print();
    test_usl2.print();

    Dolznost test_dl1, test_dl2;
    test_dl1.init();
    test_dl2.vvod();
    test_dl1.print();
    test_dl2.print();

    Patient test_pat1, test_pat2;
    test_pat1.init();
    test_pat2.vvod();
    test_pat1.print();
    test_pat2.print();

    Doctor test_doc1, test_doc2;
    test_doc1.init();
    test_doc2.vvod();
    test_doc1.print();
    test_doc2.print();

    Zapis test_zap1, test_zap2;
    test_zap1.init();
    test_zap2.vvod();
    test_zap1.print();
    test_zap2.print();*/


}

