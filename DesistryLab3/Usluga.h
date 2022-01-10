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
		Usluga(string title); //����������� � ����� ����������
		Usluga(string title, int cost);		//����������� � �����������
		
		Usluga& operator +(Usluga& another)	//�������� ��������
		{
			cost = cost + another.cost;			
			return *this;
		}

		Usluga operator ++()	//���������� ��������
		{
			cost++;
			return *this;
		}
		
		Usluga operator ++(int s)	//����������� ��������
		{
			Usluga temp = *this;
			cost++;
			return temp;
		}
		
		void vvod();	//�������� ������� �����
		void print();	//�������� ������� ������
		string get_title();	//�������� ������� ��� ��������� �������� ������
		void change_cost();	//�������� ������� ��������� ��������� ������
		friend ostream& operator<<(ostream& out, Usluga& usl); //������������� ������� - ���������� ��������� ������
};




