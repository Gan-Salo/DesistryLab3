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
	void init();
	string get_title();
	void vvod();
	void print();
};


