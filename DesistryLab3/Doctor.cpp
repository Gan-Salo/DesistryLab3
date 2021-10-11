#include "Doctor.h"

/*����������� ��� ����������*/
Doctor::Doctor()
{
	fio = "������ �.�.";
	age = 27;
	phone = "+79134225430";	
	this->dolzn = new Dolznost("�������� ���������1", "�������� �����");
	kategory = "������";

}

/*����������� � �����������*/
Doctor::Doctor(string fio, int age, string phone, Dolznost &dolzn, string kategory)
{
	this->fio = fio;
	this->age = age;
	this->phone = phone;
	this->dolzn = &dolzn;
	this->kategory = kategory;
}

/*������� ��� ��������� ��� �������*/
string Doctor::get_fio()
{
	return fio;
}

/*������� �����*/
void Doctor::vvod()
{
	cout << "_���� �������_\n";
	cout << "������� ��� �������: ";
	cin >> fio;
	cout << "\n������� ������� �������: ";
	cin >> age;
	cout << "\n������� ����� �������� �������: ";
	cin >> phone;
	(*dolzn).vvod();
	cout << "\n������� ��������� �������: ";
	cin >> kategory;
	cout << "\n\n";
}

/*������� ������*/
void Doctor::print()
{
	cout << "_����_\n";
	cout << "��� �����: ";
	cout << fio;
	cout << " || �������: ";
	cout << age;
	cout << " || �������: ";
	cout << phone;
	cout << " || ���������: ";
	cout << (*dolzn).get_title();
	cout << " || ���������: ";
	cout << kategory;
	cout << " ||\n\n";
}

/*������� ��������� �������� �������*/
void Doctor::change_age()
{
	this->fio = fio;
	cout << "������� ����� �������: ";
	cin >> age;
	this->phone = phone;
	this->dolzn = dolzn;
	this->kategory = kategory;
}