#include "Doctor.h"

void Doctor::init()
{
	fio = "������ �.�.";
	age = 27;
	phone = "+79134225430";
	dolzn.init();
	kategory = "������";
}

string Doctor::get_fio()
{
	return fio;
}

void Doctor::vvod()
{
	cout << "_���� �������_\n";
	cout << "������� ��� �������: ";
	cin >> fio;
	cout << "\n������� ������� �������: ";
	cin >> age;
	cout << "\n������� ����� �������� �������: ";
	cin >> phone;
	dolzn.vvod();
	cout << "\n������� ��������� �������: ";
	cin >> kategory;
	cout << "\n\n";
}

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
	cout << dolzn.get_title();
	cout << " || ���������: ";
	cout << kategory;
	cout << " ||\n\n";
}