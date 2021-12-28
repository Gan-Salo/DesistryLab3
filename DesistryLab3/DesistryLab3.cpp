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

   // /*Создаём 'Должность', существующую независимо от класса 'Доктор'*/
   // Dolznost test_dolz("Врач-Хирург", "Мед. персонал");  
   // //Dolznost *dolzn2 = new Dolznost("Врач-Х", "Мед.");

   // Doctor test_doc1("Корев В. Л.", 33, "+9329329", *&test_dolz, "SSS");

   // test_doc1.print();

   ///* Usluga test_usl;
   // Patient test_pat;*/
   // 
   // /*Zapis test_zap1, test_zap2(test_usl, test_doc1, test_pat, test_cab, "22:00 21.11.2022");
   // test_zap1.print();
   // test_zap2.print();*/
   // 
   // int numb = 0;
   // int area = 0;

   // Cabinet test_cab(211, "wdw", 22), test_cab2(201, "wqwe", 35);
   // test_cab.get_num(numb);
   // cout << "\nВозврат номера кабинета через ссылку: " << numb;
   // test_cab.get_area(&area);
   // cout << "\nВозврат площади кабинета через указатель: " << area << "\n";

   // test_cab = test_cab + test_cab2;
   // test_cab.print();
   // Usluga testusl2;
   // Usluga testusl("sss", 123);
   // //testusl2.print();
   // cout << testusl2;

    Patient testpat;
    testpat.get_counter();
    testpat.set_counter(3);
    testpat.get_counter();
    Patient testpat2;
    testpat.get_counter();
}

