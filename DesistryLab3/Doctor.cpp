#include "Doctor.h"

/*Конструктор без параметров*/
Doctor::Doctor()
{

}

/*Конструктор с одним параметром*/
Doctor::Doctor(string fio)
{
	this->fio = fio;
}

/*Конструктор с параметрами*/
Doctor::Doctor(string fio, int age, string phone, Dolznost &dolzn, string kategory)
{
	this->fio = fio;
	this->age = age;
	this->phone = phone;
	this->dolzn = &dolzn;
	this->kategory = kategory;
}

/*Функция для получения ФИО доктора*/
string Doctor::get_fio()
{
	return fio;
}

/*Функция ввода*/
void Doctor::vvod()
{
	cout << "_Ввод доктора_\n";
	cout << "Введите ФИО доктора: ";
	cin >> fio;
	cout << "\nВведите возраст доктора: ";
	cin >> age;
	cout << "\nВведите номер телефона доктора: ";
	cin >> phone;
	(*dolzn).vvod();
	cout << "\nВведите категорию доктора: ";
	cin >> kategory;
	cout << "\n\n";
}

/*Функция вывода*/
void Doctor::print()
{
	cout << "_Врач_\n";
	cout << "ФИО врача: ";
	cout << fio;
	cout << " || Возраст: ";
	cout << age;
	cout << " || Телефон: ";
	cout << phone;
	cout << " || Должность: ";
	cout << (*dolzn).get_title();
	cout << " || Категория: ";
	cout << kategory;
	cout << " ||\n\n";
}

/*Функция изменения возраста доктора*/
void Doctor::change_age()
{
	this->fio = fio;
	cout << "Введите новый возраст: ";
	cin >> age;
	this->phone = phone;
	this->dolzn = dolzn;
	this->kategory = kategory;
}