#include "Cabinet.h"

void Cabinet::init()
{
	number = 123;
	otdelen = "Отделение №1";
	area = 35;
}

int Cabinet::get_num()
{
	return number;
}

void Cabinet::data_set()
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

void Cabinet::data_get()
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