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
	void init();
	int get_num();
	void vvod();
	void print();
	
};
