#include "Dolznost.h"

Dolznost::Dolznost()
{
	title = "Терапевт";
	podrazdel = "Мед. персонал";

}

Dolznost::Dolznost(string title, string podrazdel)
{
	this->title = title;
	this->podrazdel = podrazdel;	
}

string Dolznost::get_title()
{
	return title;
}

void Dolznost::vvod()
{
	cout << "_Ввод должности_\n";
	cout << "Введите название должности: ";
	cin >> title;
	cout << "\nВведите подразделение: ";
	cin >> podrazdel;
	cout << "\n\n";

}

void Dolznost::print()
{
	cout << "_Должность_\n";
	cout << "Название должности: ";
	cout << title;
	cout << " || Подразделение: ";
	cout << podrazdel;
	cout << " ||\n\n";
}

