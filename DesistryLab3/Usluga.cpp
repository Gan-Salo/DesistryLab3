#include "Usluga.h"

Usluga::Usluga()
{
	title = "������ �����";
	cost = 400;
	
}

Usluga::Usluga(string title, int cost)
{
	this->title = title;
	this->cost = cost;
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

void Usluga::change_cost()
{
	this->title = title;
	this->cost = cost;
	cout << "\n������� ����� ��������� ������: ";
	cin >> cost;
}