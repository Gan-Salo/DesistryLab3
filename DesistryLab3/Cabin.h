#include <string>
#include <iostream>

using namespace std;
#pragma once
template <class T> class Cabin
{
private:
	T num;		//����� ��������
	
public:
	
	/*����������� � ����� ����������*/
	Cabin(T num)
	{
		this->num = num;
	}

	/*������� ������*/
	void print()
	{
		cout << "�����: ";
		cout << num;
		cout << "\n";
	}
};

