#include "Zapis.h"

/*Конструктор без параметров*/
Zapis::Zapis()
{
	Dolznost dolzn("Тестовая должность2", "Тестовые врачи");
	this->uslname = new Usluga("Тестовая услуга", 3200);
	this->dentist = new Doctor("Тестовый доктор", 22, "+93203832", *&dolzn, "Тестовая категория");
	this->klient = new Patient("Тестовый пациент", 45, "+398423433");
	this->cabnum = new Cabinet(290, "Тестовое отделение", 45);
	date = "12:30 28.12.2021";
}

/*Конструктор с параметрами*/
Zapis::Zapis(Usluga &uslname, Doctor &dentist, Patient &klient, Cabinet &cabnum, string date)
{
	this->uslname = &uslname;
	this->dentist = &dentist;
	this->klient = &klient;
	this->cabnum = &cabnum;
	this->date = date;
}



/*Функция ввода*/
void Zapis::vvod()
{	
	cout << "_Ввод записи_\n";
	(*uslname).vvod();
	(*dentist).vvod();
	(*klient).vvod();
	(*cabnum).vvod();
	cout << "\nВведите дату и время приема: ";
	cin >> date;
	cout << "\n\n";
}

/*Функция вывода*/
void Zapis::print()
{
	cout << "_Запись на прием_\n";
	cout << "Название услуги: ";
	cout << (*uslname).get_title();
	cout << " || ФИО врача: ";
	cout << (*dentist).get_fio();
	cout << " || ФИО пациента: ";
	cout << (*klient).get_fio();
	cout << " || Номер кабинета: ";
	cout << (*cabnum).get_num();
	cout << " || Дата приема: ";
	cout << date;
	cout << " ||\n\n";
}

/*Функция изменения принимающего доктора*/
void Zapis::change_doc()
{
	this->uslname = uslname;
	cout << "Введите ФИО нового врача: ";
	(*dentist).vvod();
	this->klient = klient;
	this->cabnum = cabnum;
	this->date = date;
}