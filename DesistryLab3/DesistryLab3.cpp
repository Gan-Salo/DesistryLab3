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
    
    Cabinet test_cab3[4];
    for (int i = 0; i < 4; i++)
    {
        test_cab3[i].print();
    }
    
    int n = 3;
    Cabinet* test_cab4; //Переменная указатель
    test_cab4 = new Cabinet[n]; //Новый тип 
    for (int i = 0; i < n; i++)
    {
        test_cab4[i].print();
    }
    
    delete[] test_cab4;    //Освобождается память, выделенная оператором 'new'
   
    Patient pat1[3];
    for (int i = 0; i < n; i++)
    {          
       pat1[i].print();
    }

    Usluga* test_usl = new Usluga;
    test_usl->print();  
    (*test_usl).print();
    test_usl[0].print();

}

