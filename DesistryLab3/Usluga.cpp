#include "Usluga.h"

void Usluga::init()
{
	title = "Чистка зубов";
	cost = 400;
	
}

string Usluga::get_title()
{
	return title;
}

void Usluga::vvod()
{
	cout << "_Ввод услуги_\n";
	cout << "Введите название услуги: ";
	cin >> title;
	cout << "\nВведите стоимость услуги: ";
	cin >> cost;
	cout << "\n\n";
	
}

void Usluga::print()
{
	cout << "_Услуга_\n";
	cout << "Название услуги: ";
	cout << title;
	cout << " || Стоимость услуги: ";
	cout << cost;
	cout << " ||\n\n";
}