#include "Zapis.h"

void Zapis::init()
{
	uslname.init();
	dentist.init();
	klient.init();
	cabnum.init();
	date = "12:30 28.12.2021";
}

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