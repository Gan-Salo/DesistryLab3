#include <string>
#include <iostream>

using namespace std; 

#pragma once
class Patient
{
private:
	string fio;		//���
	int age;		//�������
	string phone;		//����� ��������
public:
	void init();
	string get_fio();
	void vvod();
	void print();
};

