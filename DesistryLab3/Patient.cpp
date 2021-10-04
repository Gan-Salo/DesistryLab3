#include "Patient.h"

Patient::Patient()
{	
	fio = "Легостаев К.В.";
	age= 35;
	phone = "+79134567890";
}

Patient::Patient(string fio, int age, string phone)
{
	this->fio = fio;
	this->age = age;
	this->phone = phone;
}

string Patient::get_fio()
{
	return fio;
}

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

void Patient::change_phone()
{
	this->fio = fio;
	this->age = age;
	cout << "\nВведите номер телефона пациента: ";
	cin >> phone;
}