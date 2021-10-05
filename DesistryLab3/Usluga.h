#include <string>
#include <iostream>

using namespace std;

#pragma once
class Usluga
{
	private:
		string title;	//Название услуги
		int cost;	//Стоимость услуги
	public:
		Usluga();	//Конструктор без параметров
		Usluga(string title, int cost);		//Конструктор с параметрами
		void vvod();	//Прототип функции ввода
		void print();	//Прототип функции вывода
		string get_title();	//Прототип функции для получения названия услуги
		void change_cost();	//Прототип функции изменения стоимости услуги
};



