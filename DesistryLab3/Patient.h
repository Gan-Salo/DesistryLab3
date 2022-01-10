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
	static int counter;
public:
	
	Patient();		//����������� ��� ����������
	Patient(string fio, int age, string phone);		//����������� � �����������
	void vvod();	//�������� ������� �����
	void print();	//�������� ������� ������
	void change_phone();	//�������� ������� ��������� ������ ��������
	string get_fio();	//�������� ������� ��� ��������� ������� ��������
	static void set_counter(int kolvo);
	static void get_counter(); //�������� ������� ������ ���������� ���������
	
};


