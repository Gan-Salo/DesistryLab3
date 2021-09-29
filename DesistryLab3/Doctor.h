#include <string>
#include <iostream>
#include "Dolznost.h"

using namespace std;

#pragma once
class Doctor
{
private:
	string fio;			//ФИО
	int age;			//Возраст
	string phone;		//Номер телефона
	Dolznost dolzn;		//Название должности
	string kategory;	//Категория 
public:
	Doctor();	//Конструктор без параметров
	Doctor(string fio, int age, string phone, Dolznost dolzn, string kategory);		//Конструктор с параметрами
	string get_fio();
	void vvod();
	void print();
};
