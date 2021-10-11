#include <string>
#include <iostream>

using namespace std;

#pragma once
class Date
{
private:
	int day;
	int month;
	int year;
	int min;
	int hour;
public:
	Date();	//Конструктор без параметров
	Date(int day, int month, int year);
	Date(int day, int month, int year, int min, int hour);	//Конструктор с параметрами
	string get_date();	//Прототип функции для получения названия должности
	void vvod();	//Прототип функции ввода
	void print();	//Прототип функции вывода

};

