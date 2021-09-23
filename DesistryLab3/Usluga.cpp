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

void Usluga::data_set()
{
	cout << "_Ввод услуги_\n";
	cout << "Введите название услуги: ";
	cin >> title;
	cout << "\nВведите стоимость услуги: ";
	cin >> cost;
	cout << "\n\n";
	
}

void Usluga::data_get()
{
	cout << "_Услуга_\n";
	cout << "Название услуги: ";
	cout << title;
	cout << " || Стоимость услуги: ";
	cout << cost;
	cout << " ||\n\n";
}