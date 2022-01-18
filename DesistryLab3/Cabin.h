#include <string>
#include <iostream>

using namespace std;
#pragma once
template <class T> class Cabin
{
private:
	T num;		//Номер кабинета
	
public:
	
	/*Конструктор с одним параметром*/
	Cabin(T num)
	{
		this->num = num;
	}

	/*Функция вывода*/
	void print()
	{
		cout << "Номер: ";
		cout << num;
		cout << "\n";
	}
};

