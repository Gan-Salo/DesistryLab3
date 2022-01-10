#include "Patient.h"

/*Конструктор без параметров*/
Patient::Patient()
{	
	counter++;
}

/*Конструктор с одним параметром*/
Patient::Patient(string fio)
{
	this->fio = fio;
	counter++;
}

/*Конструктор с параметрами*/
Patient::Patient(string fio, int age, string phone)
{
	this->fio = fio;
	this->age = age;
	this->phone = phone;
	counter++;
}


/*Функция для получения ФИО пациента*/
string Patient::get_fio()
{
	return fio;
}

/*Функция ввода*/
void Patient::vvod()
{
	cout << "_Ввод пациента_\n";
	cout << "Введите ФИО пациента: ";
	cin >> fio;
	cout << "\nВведите возраст пациента: ";
	cin >> age;
	cout << "\nВведите номер телефона пациента: ";
	cin >> phone;
	cout << "\n\n";
}

/*Функция вывода*/
void Patient::print()
{
	cout << "_Пациент_\n";
	cout << "ФИО пациента: ";
	cout << fio;
	cout << " || Возраст: ";
	cout << age;
	cout << " || Телефон: ";
	cout << phone;
	cout << " ||\n\n";
}

/*Функция изменения номера телефона*/
void Patient::change_phone()
{
	this->fio = fio;
	this->age = age;
	cout << "\nВведите номер телефона пациента: ";
	cin >> phone;
}

/*Функция установления определённого количества пациентов*/
void Patient::set_counter(int kolvo)
{
	counter = kolvo;
}

/*Функция вывода количества пациентов*/
void Patient::get_counter()
{
	cout << counter;
};

/*Начальное количество пациентов равно нулю*/
int Patient::counter = 0;