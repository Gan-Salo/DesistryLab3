#include "Dolznost.h"

/*����������� ��� ����������*/
Dolznost::Dolznost()
{

}

/*����������� � ����� ����������*/
Dolznost::Dolznost(string title)
{
	this->title = title;
}

/*����������� � �����������*/
Dolznost::Dolznost(string title, string podrazdel)
{
	this->title = title;
	this->podrazdel = podrazdel;	
}

/*������� ��� ��������� �������� ���������*/
string Dolznost::get_title()
{
	return title;
}

/*������� �����*/
void Dolznost::vvod()
{
	cout << "_���� ���������_\n";
	cout << "������� �������� ���������: ";
	cin >> title;
	cout << "\n������� �������������: ";
	cin >> podrazdel;
	cout << "\n\n";

}

/*������� ������*/
void Dolznost::print()
{
	cout << "_���������_\n";
	cout << "�������� ���������: ";
	cout << title;
	cout << " || �������������: ";
	cout << podrazdel;
	cout << " ||\n\n";
}

/*������� ��� ��������� ������� ��������*/
void Dolznost::change_pod()
{
	this->title = title;
	cout << "\n������� ����� �������������: ";
	cin >> podrazdel;
	
}