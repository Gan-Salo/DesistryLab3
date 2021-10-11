#include "Zapis.h"

/*����������� ��� ����������*/
Zapis::Zapis()
{
	Dolznost dolzn("�������� ���������2", "�������� �����");
	this->uslname = new Usluga("�������� ������", 3200);
	this->dentist = new Doctor("�������� ������", 22, "+93203832", *&dolzn, "�������� ���������");
	this->klient = new Patient("�������� �������", 45, "+398423433");
	this->cabnum = new Cabinet(290, "�������� ���������", 45);
	date = "12:30 28.12.2021";
}

/*����������� � �����������*/
Zapis::Zapis(Usluga &uslname, Doctor &dentist, Patient &klient, Cabinet &cabnum, string date)
{
	this->uslname = &uslname;
	this->dentist = &dentist;
	this->klient = &klient;
	this->cabnum = &cabnum;
	this->date = date;
}



/*������� �����*/
void Zapis::vvod()
{	
	cout << "_���� ������_\n";
	(*uslname).vvod();
	(*dentist).vvod();
	(*klient).vvod();
	(*cabnum).vvod();
	cout << "\n������� ���� � ����� ������: ";
	cin >> date;
	cout << "\n\n";
}

/*������� ������*/
void Zapis::print()
{
	cout << "_������ �� �����_\n";
	cout << "�������� ������: ";
	cout << (*uslname).get_title();
	cout << " || ��� �����: ";
	cout << (*dentist).get_fio();
	cout << " || ��� ��������: ";
	cout << (*klient).get_fio();
	cout << " || ����� ��������: ";
	cout << (*cabnum).get_num();
	cout << " || ���� ������: ";
	cout << date;
	cout << " ||\n\n";
}

/*������� ��������� ������������ �������*/
void Zapis::change_doc()
{
	this->uslname = uslname;
	cout << "������� ��� ������ �����: ";
	(*dentist).vvod();
	this->klient = klient;
	this->cabnum = cabnum;
	this->date = date;
}