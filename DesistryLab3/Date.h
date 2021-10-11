#include <string>
#include <iostream>

using namespace std;

#pragma once
class Date
{
private:
	int day;
	int month;
	int year;
	int min;
	int hour;
public:
	Date();	//����������� ��� ����������
	Date(int day, int month, int year);
	Date(int day, int month, int year, int min, int hour);	//����������� � �����������
	string get_date();	//�������� ������� ��� ��������� �������� ���������
	void vvod();	//�������� ������� �����
	void print();	//�������� ������� ������

};

