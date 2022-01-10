#include "Patient.h"

/*����������� ��� ����������*/
Patient::Patient()
{	
	counter++;
}

/*����������� � ����� ����������*/
Patient::Patient(string fio)
{
	this->fio = fio;
	counter++;
}

/*����������� � �����������*/
Patient::Patient(string fio, int age, string phone)
{
	this->fio = fio;
	this->age = age;
	this->phone = phone;
	counter++;
}


/*������� ��� ��������� ��� ��������*/
string Patient::get_fio()
{
	return fio;
}

/*������� �����*/
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

/*������� ������*/
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

/*������� ��������� ������ ��������*/
void Patient::change_phone()
{
	this->fio = fio;
	this->age = age;
	cout << "\n������� ����� �������� ��������: ";
	cin >> phone;
}

/*������� ������������ ������������ ���������� ���������*/
void Patient::set_counter(int kolvo)
{
	counter = kolvo;
}

/*������� ������ ���������� ���������*/
void Patient::get_counter()
{
	cout << counter;
};

/*��������� ���������� ��������� ����� ����*/
int Patient::counter = 0;