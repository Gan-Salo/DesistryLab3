#include <string>
#include <iostream>

using namespace std;

#pragma once

class Dolznost
{
private:
	string title;		//Название должности
	string podrazdel;	//Подразделение, к которому относится должность
public:
	Dolznost();
	Dolznost(string title, string podrazdel);
	string get_title();
	void vvod();
	void print();
};


