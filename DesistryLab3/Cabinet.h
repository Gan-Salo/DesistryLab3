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
	Cabinet();
	Cabinet(int number, string otdelen, int area);
	int get_num();
	void vvod();
	void print();
	
};
