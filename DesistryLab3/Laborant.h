#include "Dolznost.h"
#include "Doctor.h"
#include <string>
#include <iostream>


using namespace std;
#pragma once

class Laborant : public Doctor
{	
	private:
		int kurs;
	public:
		Laborant();	//����������� ��� ����������
		Laborant(string fio, int kurs); //����������� � ������ �����������
		Laborant(string fio, int age, string phone, Dolznost& dolzn, string kategory, int kurs);	//����������� � �����������
		void vvodkurs();	//�������� ������� �����
		void printkurs();	//�������� ������� ������
	
};

