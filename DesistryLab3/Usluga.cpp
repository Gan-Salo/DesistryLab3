#include "Usluga.h"

/*Конструктор без параметров*/
Usluga::Usluga()
{

}

/*Конструктор с одним параметром*/
Usluga::Usluga(int cost)
{
	this->cost = cost;
}

/*Конструктор с параметрами*/
Usluga::Usluga(string title, int cost)
{
	this->title = title;
	this->cost = cost;
}

/*Функция для получения названия услуги*/
string Usluga::get_title()
{
	return title;
}

/*Функция ввода*/
void Usluga::vvod()
{
	cout << "_Ввод услуги_\n";
	cout << "Введите название услуги: ";
	cin >> title;
	cout << "\nВведите стоимость услуги: ";
	cin >> cost;
	cout << "\n\n";
	
}

/*Функция вывода*/
void Usluga::print()
{
	cout << "Название услуги: ";
	cout << title;
	cout << " || Стоимость услуги: ";
	cout << cost;
	cout << " ||\n\n";
}

/*Функция изменения стоимости услуги*/
void Usluga::change_cost()
{
	this->cost = this->cost - 100;
}

ostream& operator<<(ostream& out, Usluga& usl)
{
	out << "Название услуги: " << usl.title << " | Стоимость услуги: " << usl.cost << " |\n\n";
	return out;
}


void Usluga::gl_coping(const Usluga& temp)
{
	cost = temp.cost;
}