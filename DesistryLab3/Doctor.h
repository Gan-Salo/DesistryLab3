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
	Dolznost *dolzn;		//Название должности
	string kategory;	//Категория 
public:
	Doctor();	//Конструктор без параметров
	Doctor(string fio); //Конструктор с одним параметром
	Doctor(string fio, int age, string phone, Dolznost &dolzn, string kategory);	//Конструктор с параметрами
	string get_fio();
	void vvod();	//Прототип функции ввода
	void print();	//Прототип функции вывода
	void change_age();	//Прототип функции изменения возраста доктора
};
