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
	Patient();		//Конструктор без параметров
	Patient(string fio, int age, string phone);		//Конструктор с параметрами
	void vvod();	//Функция ввода
	void print();	//Функция вывода
	void change_phone();	//Функция изменения номера телефона
	string get_fio();
};

