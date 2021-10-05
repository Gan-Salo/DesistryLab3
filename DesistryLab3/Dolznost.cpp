#include "Dolznost.h"

/*Конструктор без параметров*/
Dolznost::Dolznost()
{
	title = "Терапевт";
	podrazdel = "Мед. персонал";
}

/*Конструктор с параметрами*/
Dolznost::Dolznost(string title, string podrazdel)
{
	this->title = title;
	this->podrazdel = podrazdel;	
}

/*Функция для получения названия должности*/
string Dolznost::get_title()
{
	return title;
}

/*Функция ввода*/
void Dolznost::vvod()
{
	cout << "_Ввод должности_\n";
	cout << "Введите название должности: ";
	cin >> title;
	cout << "\nВведите подразделение: ";
	cin >> podrazdel;
	cout << "\n\n";

}

/*Функция вывода*/
void Dolznost::print()
{
	cout << "_Должность_\n";
	cout << "Название должности: ";
	cout << title;
	cout << " || Подразделение: ";
	cout << podrazdel;
	cout << " ||\n\n";
}

/*Функция для получения фамилии пациента*/
void Dolznost::change_pod()
{
	this->title = title;
	cout << "\nВведите новое подразделение: ";
	cin >> podrazdel;
	
}