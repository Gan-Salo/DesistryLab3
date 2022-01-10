#include "Usluga.h"

/*����������� ��� ����������*/
Usluga::Usluga()
{

}

/*����������� � ����� ����������*/
Usluga::Usluga(int cost)
{
	this->cost = cost;
}

/*����������� � �����������*/
Usluga::Usluga(string title, int cost)
{
	this->title = title;
	this->cost = cost;
}

/*������� ��� ��������� �������� ������*/
string Usluga::get_title()
{
	return title;
}

/*������� �����*/
void Usluga::vvod()
{
	cout << "_���� ������_\n";
	cout << "������� �������� ������: ";
	cin >> title;
	cout << "\n������� ��������� ������: ";
	cin >> cost;
	cout << "\n\n";
	
}

/*������� ������*/
void Usluga::print()
{
	cout << "�������� ������: ";
	cout << title;
	cout << " || ��������� ������: ";
	cout << cost;
	cout << " ||\n\n";
}

/*������� ��������� ��������� ������*/
void Usluga::change_cost()
{
	this->cost = this->cost - 100;
}

ostream& operator<<(ostream& out, Usluga& usl)
{
	out << "�������� ������: " << usl.title << " | ��������� ������: " << usl.cost << " |\n\n";
	return out;
}


void Usluga::gl_coping(const Usluga& temp)
{
	cost = temp.cost;
}