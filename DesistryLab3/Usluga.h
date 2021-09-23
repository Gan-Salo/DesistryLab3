#include <string>
#include <iostream>

using namespace std;

#pragma once
class Usluga
{
	private:
		string title;	//Название услуги
		int cost;	//Стоимость услуги
	public:
		void init();
		string get_title();
		void data_set();
		void data_get();

};



