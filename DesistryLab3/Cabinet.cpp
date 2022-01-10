#include "Cabinet.h"

/*����������� ��� ����������*/
Cabinet::Cabinet()
{

}

/*����������� � �����������*/
Cabinet::Cabinet(int number, string otdelen, int area)
{
	this->number = number;
	this->otdelen = otdelen;
	this->area = area;
}

/*������� ��� ��������� ������ ��������*/
int Cabinet::get_num(int& ret_num)
{
	ret_num += this->number;
	return ret_num;
}

/*������� ��� ��������� ������� ��������*/
int Cabinet::get_area(int* ret_area)
{
	(*ret_area) += this->area;
	return (*ret_area);
}

/*������� �����*/
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

/*������� ������*/
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

/*������� ��������� ������ ��������*/
void Cabinet::change_num()
{
	cout << "������� ����� ����� ��������: ";
	cin >> number;
}