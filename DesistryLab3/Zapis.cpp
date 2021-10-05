#include "Zapis.h"

/*����������� ��� ����������*/
Zapis::Zapis()
{
	date = "12:30 28.12.2021";
}

/*����������� � �����������*/
Zapis::Zapis(Usluga uslname, Doctor dentist, Patient klient, Cabinet cabnum, string date)
{
	this->uslname = uslname;
	this->dentist = dentist;
	this->klient = klient;
	this->cabnum = cabnum;
	this->date = date;
}

/*������� �����*/
void Zapis::vvod()
{
	cout << "_���� ������_\n";
	uslname.vvod();
	dentist.vvod();
	klient.vvod();
	cabnum.vvod();
	cout << "\n������� ���� � ����� ������: ";
	cin >> date;
	cout << "\n\n";
}

/*������� ������*/
void Zapis::print()
{
	cout << "_������ �� �����_\n";
	cout << "�������� ������: ";
	cout << uslname.get_title();
	cout << " || ��� �����: ";
	cout << dentist.get_fio();
	cout << " || ��� ��������: ";
	cout << klient.get_fio();
	cout << " || ����� ��������: ";
	cout << cabnum.get_num();
	cout << " || ���� ������: ";
	cout << date;
	cout << " ||\n\n";
}

/*������� ��������� ������������ �������*/
void Zapis::change_doc()
{
	this->uslname = uslname;
	cout << "������� ��� ������ �����: ";
	dentist.vvod();
	this->klient = klient;
	this->cabnum = cabnum;
	this->date = date;
}