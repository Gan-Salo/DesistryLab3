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
		void init();
		string get_title();
		void data_set();
		void data_get();

};



