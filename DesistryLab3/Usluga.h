#include <string>
#include <iostream>

using namespace std;

#pragma once
class Usluga
{
	private:
		string title;	//�������� ������
		int cost;	//��������� ������
	public:
		Usluga();	//����������� ��� ����������
		Usluga(string title, int cost);		//����������� � �����������
		void vvod();
		void print();
		string get_title();
};



