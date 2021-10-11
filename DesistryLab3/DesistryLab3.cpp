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

    //Cabinet test_cab1, test_cab2;
    //test_cab2.vvod();
    //test_cab1.print();
    //test_cab2.print();
    //
    //Cabinet test_cab3[4];
    //for (int i = 0; i < 4; i++)
    //{
    //    test_cab3[i].print();
    //}
    //
    //int n = 3;
    //Cabinet* test_cab4; //Переменная указатель
    //test_cab4 = new Cabinet[n]; //Новый тип 
    //for (int i = 0; i < n; i++)
    //{
    //    test_cab4[i].print();
    //}
    //
    //delete[] test_cab4;    //Освобождается память, выделенная оператором 'new'
   
    //Patient pat1[3];
    //for (int i = 0; i < n; i++)
    //{          
    //   pat1[i].print();
    //}

    //Usluga* test_usl = new Usluga;
    //test_usl->print();  
    //(*test_usl).print();
    //test_usl[0].print();

    /*Тестирование функций изменения*/

    /*Zapis test_zap1;
    test_zap1.vvod();
    test_zap1.print();
    test_zap1.change_doc();
    test_zap1.print();*/
  
    /*Создаём 'Должность', существующую независимо от класса 'Доктор'*/
    Dolznost test_dolz("Врач-Хирург", "Мед. персонал");  
    //Dolznost *dolzn2 = new Dolznost("Врач-Х", "Мед.");

    Doctor test_doc1("Корев В. Л.", 33, "+9329329", *&test_dolz, "SSS");

    test_doc1.print();

    Usluga test_usl;
    Patient test_pat;
    Cabinet test_cab;
    Zapis test_zap1, test_zap2(test_usl, test_doc1, test_pat, test_cab, "22:00 21.11.2022");
    test_zap1.print();
    test_zap2.print();
    

}

