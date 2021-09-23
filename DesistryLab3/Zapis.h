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
	void init();
	void vvod();
	void print();
};