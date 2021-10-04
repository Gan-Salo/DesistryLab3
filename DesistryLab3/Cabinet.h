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
	int get_num();
	void vvod();	//Функция ввода
	void print();	//Функция вывода
	void change_num();	//Функция изменения номера кабинета
};
