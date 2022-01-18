#include "Laborant.h"
/*����������� ��� ����������*/

Laborant::Laborant()
{

}

/*����������� � ����� ����������*/
Laborant::Laborant(string fio, int kurs) : Doctor(fio)
{
	this->kurs = kurs;
}

/*����������� � �����������*/
Laborant::Laborant(string fio, int age, string phone, Dolznost& dolzn, string kategory, int kurs) : Doctor(fio, age, phone, dolzn, kategory)
{
	this->kurs = kurs;
	
}


/*������� �����*/
void Laborant::vvodkurs()
{
	
	cin >> this->kurs;
	cout << kurs << "\n\n";
}

/*������� ������*/
void Laborant::printkurs()
{
	cout << this->kurs;
	cout << " ||\n\n";
}