#include "Cabinet.h"

Cabinet::Cabinet()
{
	number = 123;
	otdelen = "��������� �1";
	area = 35;
}

Cabinet::Cabinet(int number, string otdelen, int area)
{
	this->number = number;
	this->otdelen = otdelen;
	this->area = area;
}

int Cabinet::get_num()
{
	return number;
}

void Cabinet::vvod()
{
	cout << "_���� ��������_\n";
	cout << "������� ����� ��������: ";
	cin >> number;
	cout << "\n������� ���������: ";
	cin >> otdelen;
	cout << "\n������� ������� ��������: ";
	cin >> area;
	cout << "\n\n";
}

void Cabinet::print()
{
	cout << "_�������_\n";
	cout << "�����: ";
	cout << number;
	cout << " || ���������: ";
	cout << otdelen;
	cout << " || �������: ";
	cout << area;
	cout << " ||\n\n";
}