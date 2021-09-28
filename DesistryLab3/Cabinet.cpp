#include "Cabinet.h"

Cabinet::Cabinet()
{
	number = 123;
	otdelen = "Отделение №1";
	area = 35;
}

Cabinet::Cabinet(int number, string otdelen, int area)
{
	this->number = number;
	this->otdelen = otdelen;
	this->area = area;
}

int Cabinet::get_num()
{
	return number;
}

void Cabinet::vvod()
{
	cout << "_Ввод кабинета_\n";
	cout << "Введите номер кабинета: ";
	cin >> number;
	cout << "\nВведите отделение: ";
	cin >> otdelen;
	cout << "\nВведите площадь кабинета: ";
	cin >> area;
	cout << "\n\n";
}

void Cabinet::print()
{
	cout << "_Кабинет_\n";
	cout << "Номер: ";
	cout << number;
	cout << " || Отделение: ";
	cout << otdelen;
	cout << " || Площадь: ";
	cout << area;
	cout << " ||\n\n";
}