#include "Zapis.h"

void Zapis::init()
{
	uslname.init();
	dentist.init();
	klient.init();
	cabnum.init();
	date = "12:30 28.12.2021";
}

void Zapis::vvod()
{
	cout << "_Ввод записи_\n";
	uslname.vvod();
	dentist.vvod();
	klient.vvod();
	cabnum.vvod();
	cout << "\nВведите дату и время приема: ";
	cin >> date;
	cout << "\n\n";
}

void Zapis::print()
{
	cout << "_Запись на прием_\n";
	cout << "Название услуги: ";
	cout << uslname.get_title();
	cout << " || ФИО врача: ";
	cout << dentist.get_fio();
	cout << " || ФИО пациента: ";
	cout << klient.get_fio();
	cout << " || Номер кабинета: ";
	cout << cabnum.get_num();
	cout << " || Дата приема: ";
	cout << date;
	cout << " ||\n\n";
}