#include "Patient.h"

void Patient::init()
{	
	fio = "��������� �.�.";
	age= 35;
	phone = "+79134567890";
}

string Patient::get_fio()
{
	return fio;
}

void Patient::vvod()
{
	cout << "_���� ��������_\n";
	cout << "������� ��� ��������: ";
	cin >> fio;
	cout << "\n������� ������� ��������: ";
	cin >> age;
	cout << "\n������� ����� �������� ��������: ";
	cin >> phone;
	cout << "\n\n";
}

void Patient::print()
{
	cout << "_�������_\n";
	cout << "��� ��������: ";
	cout << fio;
	cout << " || �������: ";
	cout << age;
	cout << " || �������: ";
	cout << phone;
	cout << " ||\n\n";
}