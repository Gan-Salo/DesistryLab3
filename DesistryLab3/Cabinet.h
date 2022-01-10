#include <string>
#include <iostream>

using namespace std;

#pragma once
class Cabinet
{
private:
	int number;		//Номер кабинета
	string otdelen;	//Отделение, в которое входит кабинет
	int area;		//Площадь кабинета
public:	
	Cabinet();	//Конструктор без параметров
	Cabinet(int number, string otdelen, int area);	//Конструктор с параметрами
	int get_num(int& ret_num);
	int get_area(int* ret_area);	//Функция возврата номера кабинета
	void vvod();	//Прототип функции ввода
	void print();	//Прототип функции вывода
	void change_num();	//Прототип функции изменения номера кабинета
};
