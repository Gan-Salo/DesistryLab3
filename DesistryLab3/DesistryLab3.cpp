#include <iostream>
#include <Windows.h>
#include <String>
#include "Usluga.h"
#include "Doctor.h"
#include "Patient.h"
#include "Cabinet.h"
#include "Laborant.h"
#include "Zapis.h"
#include "Cabin.h"
#include <conio.h>
#include <vector>
#include <algorithm>

bool correct_order(Doctor doc1, Doctor doc2)
{
    bool result = false;
    if ((doc1.get_fio())[0] <= (doc2.get_fio())[0])
        result = true;
    return result;
}

char s;

bool search_book(Doctor doc1)
{
    return (doc1.get_fio())[0] == s;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

   //// /*Создаём 'Должность', существующую независимо от класса 'Доктор'*/
   // Dolznost test_dolz("Врач-Хирург", "Мед. персонал");  
   // //Dolznost *dolzn2 = new Dolznost("Врач-Х", "Мед.");
   // Doctor test_doc1("Корев В. Л.", 33, "+9329329", *&test_dolz, "SSS");


   
   // 
   // /*Zapis test_zap1, test_zap2(test_usl, test_doc1, test_pat, test_cab, "22:00 21.11.2022");
   // test_zap1.print();
   // test_zap2.print();*/
   // 
    
   // test_cab = test_cab + test_cab2;
   // test_cab.print();
   // Usluga testusl2;
   // Usluga testusl("sss", 123);
   // //testusl2.print();
   //cout << testusl2;


    int mainmenu, extramenu, opmenu;
    do
    {
        system("CLS");       
        cout << "1) Возврат значений методов\n2) Перегрузка операторов\n3) Шаблон класса\n 4) Контейнеры, поиск и сортировка\nESC - выход";
        mainmenu = _getch();
        switch (mainmenu)
        {
            case 49:
            {
                system("CLS");
                int numb = 0;
                int area = 0;
                Cabinet test_cab(211, "wdw", 22), test_cab2(201, "wqwe", 35);
                test_cab.get_num(numb);
                cout << "Возврат номера кабинета через ссылку: " << numb;
                test_cab2.get_area(&area);
                cout << "\nВозврат площади кабинета через указатель: " << area << "\n";
                _getch();
                break;
            }

            case 50:
            {                                                 
                 do
                 {
                     system("CLS");
                     cout << "1) Оператор сложения\n2) Постфиксный оператор\n3) Префиксный оператор\n";
                     opmenu = _getch();                    
                 } while (opmenu < 49 && opmenu > 51);

                 /*Оператор сложения - складывает стоимость услуг*/
                 if (opmenu == 49)
                 {
                     system("CLS");
                     Usluga usl1("fisrt", 2100);
                     Usluga usl2("second", 1500);
                     Usluga usl3(0);
                     cout << "\nПервая услуга: ";
                     usl1.print();
                     cout << "\nВторая услуга: ";
                     usl2.print();
                     usl3 = usl1 + usl2;
                     cout << "\nТретья услуга: ";
                     usl3.print();
                     _getch();
                 }
                 /*Постфиксный оператор*/
                 else if (opmenu == 50)
                 {
                     system("CLS");
                     cout << "\nПостфиксный оператор";
                     Usluga usl1("first", 2100);
                     Usluga usl2(0);
                     cout << "\nПервая услуга до: ";
                     usl1.print();
                     usl2 = usl1++;
                     cout << "\nПервая услуга после: ";
                     usl1.print();
                     cout << "\nВторая услуга после: ";
                     usl2.print();
                     _getch();
                 }
                 /*Префиксный оператор*/
                 else if (opmenu == 51)
                 {
                     system("CLS");
                     Usluga usl1("first", 2100);
                     Usluga usl2(0);
                     cout << "\nПрефиксный оператор";
                     cout << "\nПервая услуга до: ";
                     cout << usl1;
                     usl2 = ++usl1;
                     cout << "\nПервая услуга после: ";
                     cout << usl1;
                     cout << "\nВторая услуга после: ";
                     cout << usl2;
                     _getch();
                 }
                 cout << "\nНажмите любую клавишу для возврата в меню.";
                 _getch();
                 break;

                _getch();
                break;
            }

            case 51:
            {
                /*Шаблон класса*/
                system("CLS");
                Cabin<string> cab1("dw232");
                Cabin<int> cab2(123);
                cab1.print();
                cab2.print();
                _getch();
                break;
            }

            case 52:
            {
                /*Сортировка*/
                system("CLS");
                Dolznost dolz("Стоматолог", "Стандарт");
                vector<Doctor> docs;
                vector<Doctor>::iterator dc;
                
                Doctor* doc = new Doctor("Овсянников Г.В.", 19, "+213091829038", dolz, "Высшая");
                Doctor* doc2 = new Doctor("Арапв", 24, "+83742384293", dolz, "Высшая");
                Laborant* lab1 = new Laborant("Дее", 20, "434234234", dolz, "Обычная", 5);
                
                docs.clear();
                docs.push_back(*doc);
                docs.push_back(*doc2);
                docs.push_back(*lab1);

                cout << "Контейнер до сортировки фамилий по алфавиту:\n\n";
                for (dc = docs.begin(); dc != docs.end(); dc++)
                {
                    (*dc).print();
                    cout << "\n";
                }

                sort(docs.begin(), docs.end(), correct_order);

                cout << "Контейнер после сортировки фамилий по алфавиту:\n\n";
                for (dc = docs.begin(); dc != docs.end(); dc++)
                {
                    (*dc).print();
                    cout << "\n";
                }
                
                /*Поиск*/                
                vector<Doctor>::iterator poisk;

                cout << "\n\nВведите букву, на которую должно начинатся ФИО доктора: ";
                cin >> s;

                cout << "\nФИО, удовлетворяющие запросу: \n";
                for (dc = docs.begin(); dc != docs.end(); dc++)
                {
                    poisk = find_if(dc, docs.end(), search_book);
                    dc = poisk;
                    if (poisk != docs.end())
                    {
                        (*dc).print();
                        cout << "\n";
                    }
                }

                _getch();
                break;
            }
        }

    } while (mainmenu != 27);

    /*cout << "\n";
    Usluga usl1("Xewq", 222);
    Usluga usl2(123);
    Usluga usl3;

    cout << usl1;
    cout << usl2;
    cout << usl3;*/
}

