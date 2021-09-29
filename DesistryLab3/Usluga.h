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
		void vvod();
		void print();
		string get_title();
};



