#include <string>
#include <iostream>
#include "Usluga.h"
#include "Doctor.h"
#include "Patient.h"
#include "Cabinet.h"

using namespace std;

#pragma once
class Zapis
{
private:
	Usluga uslname;		//Название услуги
	Doctor dentist;		//Врач
	Patient klient;		//Пациент	
	Cabinet cabnum;		//Номер кабинета приёма
	string date;		//Дата и время приема
public:
	Zapis();	//Конструктор без параметров
	Zapis(Usluga uslname, Doctor dentist, Patient klient, Cabinet cabnum, string date);		//Конструктор с параметрами
	void vvod();	//Прототип функции ввода
	void print();	//Прототип функции вывода
	void change_doc();	//Прототип функции изменения принимающего доктора

};