#include "Dolznost.h"
#include "Doctor.h"
#include <string>
#include <iostream>


using namespace std;
#pragma once

class Laborant : public Doctor
{	
	private:
		int kurs;
	public:
		Laborant();	//Конструктор без параметров
		Laborant(string fio, int kurs); //Конструктор с двуумя параметрами
		Laborant(string fio, int age, string phone, Dolznost& dolzn, string kategory, int kurs);	//Конструктор с параметрами
		void vvodkurs();	//Прототип функции ввода
		void printkurs();	//Прототип функции вывода
	
};

