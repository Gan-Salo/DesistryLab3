#include <string>
#include <iostream>
#include "dolznost.h"

using namespace std;

#pragma once
class Doctor
{
private:
	string fio;			//���
	int age;			//�������
	string phone;		//����� ��������
	dolznost dolzn;		//�������� ���������
	string kategory;	//��������� 
public:
	void init();
	string get_fio();
	void vvod();
	void print();
};
