#include <iostream>
#include <Windows.h>
#include <String>
#include "Usluga.h"
#include "Doctor.h"
#include "Patient.h"
#include "Cabinet.h"
#include "Zapis.h"
#include <conio.h>

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
        cout << "1) Возврат значений методов\n2) Перегрузка операторов\n3) Дружественная функция\n4) Статический метод\n5) Мелкое и глубокое копирования\n6) Одномерный массив\n7) Двумерный массив\n8) Защиты и исключения\nESC - выход";
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
                system("CLS");
                cout << "Демонстрация работы дружественной функции - оператора вывода\n";
                Usluga testusl("saqx", 222);  
                cout << "Вывод через обычный метод класса\n";
                testusl.print();
                cout << "Вывод через дружественную функцию\n";
                cout << testusl;
                _getch();
                break;
            }

            case 52:
            {
                system("CLS");
                cout << "Количество пациентов до добавления: ";
                Patient::get_counter();
                Patient testpat;
                cout << "\nКоличество пациентов после добавления одного объекта: ";
                Patient::get_counter();
                cout << "\nКоличество пациентов после установки количества пациентов на 3: ";
                Patient::set_counter(3);
                Patient::get_counter();
                Patient testpat2;
                cout << "\nКоличество пациентов после добавления ещё одного объекта: ";
                Patient::get_counter();
                _getch();
                break;
            }

            case 53:
            {                
                system("CLS");
                Usluga* usl = new Usluga(222);
                cout << "Демонстрация работы дружественной функции - оператора вывода\n";               
                Usluga& testusl1 = *usl;
                Usluga* testusl2 = new Usluga(*usl);
                cout << "Изначальный вариант:\n";
                cout << *usl;
                testusl1.change_cost();
                
                cout << "Мелкое (поверхностное) копирование:\n";
                cout << testusl1;

                cout << "Глубокое копирование:\n";
                cout << *testusl2;
                _getch();
                break;
            }

            case 54:
            {
                system("CLS");                
                int n ;
                do
                {
                    cout << "Введите количество пациентов для создания массива: ";
                    cin >> n ;
                    if (n < 0)
                    {
                        cout << "Введено неверное значение.";
                    }
                } while (n < 0);               
                Patient* pat = new Patient[n];

                /*Ввод и вывод массива*/
                for (int i = 0; i < n; i++)
                {
                    pat[i] = *new Patient("Тестовый пациент ");
                    pat[i].print();
                }
              
                _getch();
                break;
            }

            case 55:
            {
                system("CLS");
                
                Patient pat[2][2];

                /*Ввод и вывод массива*/
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        pat[i][j] = *new Patient();
                        pat[i][j].vvod();                       
                    }
                }

                /*Вывод массива*/
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        pat[i][j].print();
                    }
                }               
                _getch();
                break;
            }

            case 56:
            {
                system("CLS");
                Cabinet cab;
                cab.vvod();
                cab.print();
                _getch();
                break;
            }
        }

    } while (mainmenu != 27);
}

