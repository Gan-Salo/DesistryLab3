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

void Usluga::data_set()
{
	cout << "_���� ������_\n";
	cout << "������� �������� ������: ";
	cin >> title;
	cout << "\n������� ��������� ������: ";
	cin >> cost;
	cout << "\n\n";
	
}

void Usluga::data_get()
{
	cout << "_������_\n";
	cout << "�������� ������: ";
	cout << title;
	cout << " || ��������� ������: ";
	cout << cost;
	cout << " ||\n\n";
}