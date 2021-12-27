#include <string>
#include <iostream>

using namespace std;

#pragma once
class Cabinet
{
private:
	int number;		//����� ��������
	string otdelen;	//���������, � ������� ������ �������
	int area;		//������� ��������
public:	
	Cabinet();	//����������� ��� ����������
	Cabinet(int number, string otdelen, int area);	//����������� � �����������
	int get_num(int& ret_num);
	int get_area(int* ret_area);	//������� �������� ������ ��������
	
	Cabinet& operator +(Cabinet& another)
	{
		number = number + another.number;
		area = area + another.area;
		return *this;
	}

	void vvod();	//�������� ������� �����
	void print();	//�������� ������� ������
	void change_num();	//�������� ������� ��������� ������ ��������
};
