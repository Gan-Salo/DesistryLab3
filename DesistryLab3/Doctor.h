#include <string>
#include <iostream>
#include "dolznost.h"

using namespace std;

#pragma once
class Doctor
{
private:
	string fio;			//ФИО
	int age;			//Возраст
	string phone;		//Номер телефона
	dolznost dolzn;		//Название должности
	string kategory;	//Категория 
public:
	void init();
	string get_fio();
	void vvod();
	void print();
};
