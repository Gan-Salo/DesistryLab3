#include <string>
#include <iostream>

using namespace std;

#pragma once
class Dolznost
{
private:
	string title;		//Название должности
	string podrazdel;	//Подразделение, к которому относится должность
public:
	Dolznost();	//Конструктор без параметров
	Dolznost(string title); //Конструктор с одним параметром
	Dolznost(string title, string podrazdel);	//Конструктор с параметрами
	string get_title();	//Прототип функции для получения названия должности
	void vvod();	//Прототип функции ввода
	void print();	//Прототип функции вывода
	void change_pod();	//Прототип функции изменения подразделения
};


