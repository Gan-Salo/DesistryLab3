#include "Usluga.h"

void Usluga::init()
{
	title = "������ �����";
	cost = 400;
	
}

string Usluga::get_title()
{
	return title;
}

void Usluga::vvod()
{
	cout << "_���� ������_\n";
	cout << "������� �������� ������: ";
	cin >> title;
	cout << "\n������� ��������� ������: ";
	cin >> cost;
	cout << "\n\n";
	
}

void Usluga::print()
{
	cout << "_������_\n";
	cout << "�������� ������: ";
	cout << title;
	cout << " || ��������� ������: ";
	cout << cost;
	cout << " ||\n\n";
}