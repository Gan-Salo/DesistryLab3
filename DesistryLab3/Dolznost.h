#include <string>
#include <iostream>

using namespace std;

#pragma once
class Dolznost
{
private:
	string title;		//�������� ���������
	string podrazdel;	//�������������, � �������� ��������� ���������
public:
	Dolznost();	//����������� ��� ����������
	Dolznost(string title); //����������� � ����� ����������
	Dolznost(string title, string podrazdel);	//����������� � �����������
	string get_title();	//�������� ������� ��� ��������� �������� ���������
	void vvod();	//�������� ������� �����
	void print();	//�������� ������� ������
	void change_pod();	//�������� ������� ��������� �������������
};


