#include "Laborant.h"
/*Конструктор без параметров*/

Laborant::Laborant()
{

}

/*Конструктор с одним параметром*/
Laborant::Laborant(string fio, int kurs) : Doctor(fio)
{
	this->kurs = kurs;
}

/*Конструктор с параметрами*/
Laborant::Laborant(string fio, int age, string phone, Dolznost& dolzn, string kategory, int kurs) : Doctor(fio, age, phone, dolzn, kategory)
{
	this->kurs = kurs;
	
}


/*Функция ввода*/
void Laborant::vvodkurs()
{
	
	cin >> this->kurs;
	cout << kurs << "\n\n";
}

/*Функция вывода*/
void Laborant::printkurs()
{
	cout << this->kurs;
	cout << " ||\n\n";
}