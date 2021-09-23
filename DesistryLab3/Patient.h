#include <string>
#include <iostream>

using namespace std; 

#pragma once
class Patient
{
private:
	string fio;		//ФИО
	int age;		//Возраст
	string phone;		//Номер телефона
public:
	void init();
	string get_fio();
	void vvod();
	void print();
};

