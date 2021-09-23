#include "Doctor.h"

void Doctor::init()
{
	fio = "Авдеев М.И.";
	age = 27;
	phone = "+79134225430";
	dolzn.init();
	kategory = "Высшая";
}

string Doctor::get_fio()
{
	return fio;
}

void Doctor::vvod()
{
	cout << "_Ввод доктора_\n";
	cout << "Введите ФИО доктора: ";
	cin >> fio;
	cout << "\nВведите возраст доктора: ";
	cin >> age;
	cout << "\nВведите номер телефона доктора: ";
	cin >> phone;
	dolzn.vvod();
	cout << "\nВведите категорию доктора: ";
	cin >> kategory;
	cout << "\n\n";
}

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
	cout << dolzn.get_title();
	cout << " || Категория: ";
	cout << kategory;
	cout << " ||\n\n";
}