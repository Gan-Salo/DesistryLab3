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
	void init();
	string get_fio();
	void vvod();
	void print();
};
