#include "Cabinet.h"

/*Конструктор без параметров*/
Cabinet::Cabinet()
{

}

/*Конструктор с параметрами*/
Cabinet::Cabinet(int number, string otdelen, int area)
{
	this->number = number;
	this->otdelen = otdelen;
	this->area = area;
}

/*Функция для получения номера кабинета*/
int Cabinet::get_num(int& ret_num)
{
	ret_num += this->number;
	return ret_num;
}

/*Функция для получения площади кабинета*/
int Cabinet::get_area(int* ret_area)
{
	(*ret_area) += this->area;
	return (*ret_area);
}

/*Функция ввода*/
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

/*Функция вывода*/
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

/*Функция изменения номера кабинета*/
void Cabinet::change_num()
{
	cout << "Введите новый номер кабинета: ";
	cin >> number;
}