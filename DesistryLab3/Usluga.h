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
		Usluga(int cost); //Конструктор с одним параметром
		Usluga(string title, int cost);		//Конструктор с параметрами
		
		Usluga& operator +(Usluga& another)	//Оператор сложения
		{
			cost = cost + another.cost;			
			return *this;
		}

		Usluga operator ++()	//Префиксный оператор
		{
			cost++;
			return *this;
		}
		
		Usluga operator ++(int s)	//Постфиксный оператор
		{
			Usluga temp = *this;
			cost++;
			return temp;
		}
		
		Usluga& operator=(const Usluga & temp)	//Оператор присваивания
		{
			gl_coping(temp);
			return *this;
		}

		void vvod();	//Прототип функции ввода
		void print();	//Прототип функции вывода
		string get_title();	//Прототип функции для получения названия услуги
		void change_cost();	//Прототип функции изменения стоимости услуги
		void gl_coping(const Usluga& temp); //Прототип функции копирования
		friend ostream& operator<<(ostream& out, Usluga& usl); //Дружественная функция - перегрузка оператора вывода
};




