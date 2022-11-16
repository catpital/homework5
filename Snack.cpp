#include "Automat.h"
#include <iostream>
#include <cstdlib>

#include <locale.h>
using namespace std;

/*    Snack */
Snack::Snack(const char *name, int calori, float price)
{
	Snack_Name = name;
	Calorrii = calori;
	Snack_Price = price;
	cout << "����� ���� ini "<< Snack_Name << endl;
}
Snack::Snack(const char *name, int calori)
{
	Snack_Name = name;
	Calorrii = calori;
}
Snack::Snack(float price)
{
	Snack_Price = price;
}

Snack::Snack(const char* name)
{
	Snack_Name = name;
	
}
void Snack::setSnack_Name(const char* name)
{
	Snack_Name = name;
}
void Snack::setCalorrii(int calori)
{
	Calorrii = calori;
}

void Snack::setSnack_Price(float price)
{
	Snack_Price = price;
}
void Snack::Show()
{
	//cout << "�������� ����� " << Snack_Name << endl;
	cout << "������� " << Calorrii << endl;
}

void Snack::DisplaySnack()
{
	cout << "�������� ����� " << Snack_Name << endl;
	cout << "������� " << Calorrii << endl;
	cout << "���� " << Snack_Price << endl;
}



/* ���� slot ����� */

//SnackSlot::SnacksSlot(Snack)

SnacksSlot::SnacksSlot(const char* sname, int sslot, const char* snbrand)

{
	Slotname = sname;
	Slot_nom = sslot;
	Brand = snbrand;
	cout << "SnackSlot " << Slotname << endl;
	cout << "SnackSlot " << Slot_nom << endl;
}
void SnacksSlot::addSnack(const char* snbrand)
{
	Brand = snbrand;
	cout << "�������� �������� " << Brand << endl;
	cout << endl;
}
void SnacksSlot::setSlot_nom(int sslot)
{
	Slot_nom = sslot;
}
void SnacksSlot::setBrand(const char *snbrand)
{
	Brand = snbrand;
}
void SnacksSlot::addSnackSlot()
{
	Slot_nom++;
	cout<<"�������� ���� " << endl;

}
 int SnacksSlot::getSlotnom()
{
	return Slot_nom;
}
void SnacksSlot::Display()
{
	cout << "����� ����� " << Slot_nom << endl;
	cout << "����� " << Brand << endl;
	cout << "��� ����� " << Slotname << endl;
}

   /*      VendingMachine       */

VendingMachine::VendingMachine(const char *nammachine, int slotcount, const char* Slotname)
{
	Machname = nammachine;
	Count_slots = slotcount;
	SLname = Slotname;
	
}
VendingMachine::VendingMachine(const char* nammachine, int slotcount)
{
	    Machname = nammachine;
		Count_slots = slotcount;

}


int VendingMachine::addSlot(int slotcount, const char* Slotname)
{
	if (slotcount < count_slot_full)
	{
		slotcount++;
		SLname = Slotname;
		return slotcount;
	}
	else
	{
		cout << "���� ���������" << endl;
	}
}
int VendingMachine::getEmptySlotsCount()
{
	EmptySlotsCount=count_slot_full- Count_slots;
		return EmptySlotsCount;
}
void VendingMachine::Display()
{
	
	cout << "������ " << Machname<<endl;
	cout << "����� � ����� " << SLname << endl;
	cout << "������ ������ " << EmptySlotsCount << endl;
}

