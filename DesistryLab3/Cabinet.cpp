#include "Cabinet.h"

void Cabinet::init()
{
	number = 123;
	otdelen = "��������� �1";
	area = 35;
}

int Cabinet::get_num()
{
	return number;
}

void Cabinet::data_set()
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

void Cabinet::data_get()
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