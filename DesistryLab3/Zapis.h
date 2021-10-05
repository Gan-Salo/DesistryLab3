#include <string>
#include <iostream>
#include "Usluga.h"
#include "Doctor.h"
#include "Patient.h"
#include "Cabinet.h"

using namespace std;

#pragma once
class Zapis
{
private:
	Usluga uslname;		//�������� ������
	Doctor dentist;		//����
	Patient klient;		//�������	
	Cabinet cabnum;		//����� �������� �����
	string date;		//���� � ����� ������
public:
	Zapis();	//����������� ��� ����������
	Zapis(Usluga uslname, Doctor dentist, Patient klient, Cabinet cabnum, string date);		//����������� � �����������
	void vvod();	//�������� ������� �����
	void print();	//�������� ������� ������
	void change_doc();	//�������� ������� ��������� ������������ �������

};