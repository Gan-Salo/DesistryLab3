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
	static int counter;
public:
	
	Patient();		//Конструктор без параметров
	Patient(string fio, int age, string phone);		//Конструктор с параметрами
	void vvod();	//Прототип функции ввода
	void print();	//Прототип функции вывода
	void change_phone();	//Прототип функции изменения номера телефона
	string get_fio();	//Прототип функции для получения фамилии пациента
	static void set_counter(int kolvo);
	static void get_counter(); //Прототип функции вывода количества пациентов
	
};


