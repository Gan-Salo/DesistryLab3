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
	Patient();		//����������� ��� ����������
	Patient(string fio, int age, string phone);		//����������� � �����������
	void vvod();
	void print();
	void change_phone();
	string get_fio();
};

