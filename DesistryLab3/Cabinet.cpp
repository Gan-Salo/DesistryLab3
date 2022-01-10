#include "Cabinet.h"

/*Конструктор без параметров*/
Cabinet::Cabinet()
{

}

/*Конструктор с одним параметром*/
Cabinet::Cabinet(int number)
{
	this->number = number;
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
	do
	{
		cout << "Введите номер кабинета: ";
		try
		{
			cin >> number;
			
			if (number < 0)
			{
				throw "Данное значение не подходит для описания номера кабинета.\n";
			}
		}
		catch (const char* e)
		{
			cerr << "Error: " << e;
			number = -1;
		}

	} while (number == -1);

	cout << "\nВведите отделение: ";
	cin >> otdelen;

	do
	{	
		try
		{	
			cout << "\nВведите площадь кабинета: ";
			cin >> area;
			if (area < 0)
			{
				throw "Данное значение не подходит для описания номера кабинета.\n";
			}
		}
		catch (const char* e)
		{
			cerr << "Error: " << e;
			area = -1;
		}

	} while (area == -1);
	cout << "\n\n";
}

/*Функция вывода*/
void Cabinet::print()
{
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