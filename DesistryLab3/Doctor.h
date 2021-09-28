#include <string>
#include <iostream>
#include "Dolznost.h"

using namespace std;

#pragma once
class Doctor
{
private:
	string fio;			//���
	int age;			//�������
	string phone;		//����� ��������
	Dolznost dolzn;		//�������� ���������
	string kategory;	//��������� 
public:
	Doctor();
	Doctor(string fio, int age, string phone, Dolznost dolzn, string kategory);
	string get_fio();
	void vvod();
	void print();
};
