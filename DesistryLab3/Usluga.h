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
		
		Usluga operator ++()	//���������� ��������
		{
			cost += cost;
			return *this;
		}
		
		Usluga operator ++(int cost)	//����������� ��������
		{
			Usluga title = *this;
			cost += cost;
			return title;
		}
		
		void vvod();	//�������� ������� �����
		void print();	//�������� ������� ������
		string get_title();	//�������� ������� ��� ��������� �������� ������
		void change_cost();	//�������� ������� ��������� ��������� ������
		friend ostream& operator<<(ostream& out, Usluga& usl); //������������� ������� - ���������� ��������� ������
};




