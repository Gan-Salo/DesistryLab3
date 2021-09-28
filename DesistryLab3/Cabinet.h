#include <string>
#include <iostream>

using namespace std;

#pragma once
class Cabinet
{
private:
	int number;		//Номер кабинета
	string otdelen;	//Отделение, в которое входит кабинет
	int area;		//Площадь кабинета
public:	
	Cabinet();
	Cabinet(int number, string otdelen, int area);
	int get_num();
	void vvod();
	void print();
	
};
