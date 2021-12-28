#include <string>
#include <iostream>

using namespace std; 

#pragma once
class Patient
{
private:
	static int counter;
	string fio;		//���
	int age;		//�������
	string phone;		//����� ��������
public:
	
	Patient();		//����������� ��� ����������
	Patient(string fio, int age, string phone);		//����������� � �����������
	void vvod();	//�������� ������� �����
	void print();	//�������� ������� ������
	void change_phone();	//�������� ������� ��������� ������ ��������
	string get_fio();	//�������� ������� ��� ��������� ������� ��������
	static void set_counter(int kolvo);
	void get_counter(); //�������� ������� ������ ���������� ���������
	
};


