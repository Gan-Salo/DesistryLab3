#include "Cabinet.h"

/*����������� ��� ����������*/
Cabinet::Cabinet()
{

}

/*����������� � ����� ����������*/
Cabinet::Cabinet(int number)
{
	this->number = number;
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
	do
	{
		cout << "������� ����� ��������: ";
		try
		{
			cin >> number;
			
			if (number < 0)
			{
				throw "������ �������� �� �������� ��� �������� ������ ��������.\n";
			}
		}
		catch (const char* e)
		{
			cerr << "Error: " << e;
			number = -1;
		}

	} while (number == -1);

	cout << "\n������� ���������: ";
	cin >> otdelen;

	do
	{	
		try
		{	
			cout << "\n������� ������� ��������: ";
			cin >> area;
			if (area < 0)
			{
				throw "������ �������� �� �������� ��� �������� ������ ��������.\n";
			}
		}
		catch (const char* e)
		{
			cerr << "Error: " << e;
			area = -1;
		}

	} while (area == -1);
	cout << "\n\n";
}

/*������� ������*/
void Cabinet::print()
{
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