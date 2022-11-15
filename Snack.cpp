#include "Automat.h"
#include <iostream>
#include <cstdlib>
//#include <stdio.h>
#include <locale.h>
using namespace std;

/*    Snack */
Snack::Snack(const char *name, int calori, float price)
{
	Snack_Name = name;
	Calorrii = calori;
	Snack_Price = price;
	cout << "класс Снек ini "<< Snack_Name << endl;
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
	//cout << "Название снека " << Snack_Name << endl;
	cout << "Калорий " << Calorrii << endl;
}

void Snack::DisplaySnack()
{
	cout << "Название снека " << Snack_Name << endl;
	cout << "Калорий " << Calorrii << endl;
	cout << "Цена " << Snack_Price << endl;
}



/* Снек slot класс */

//SnackSlot::SnacksSlot(Snack)

SnacksSlot::SnacksSlot(const char* sname, int sslot, const char* snbrand)

{
	Slotname = sname;
	Slot_nom = sslot;
	Brand = snbrand;
	cout << "SnackSlot " << Slotname << endl;
	cout << "SnackSlot " << Slot_nom << endl;
}
//SnacksSlot::SnacksSlot(Snack)
//{
//}
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
	cout<<"Добавили слот " << endl;

}
 int SnacksSlot::getSlotnom()
{
	return Slot_nom;
}
void SnacksSlot::Display()
{
	cout << "Номер слота " << Slot_nom << endl;
	cout << "Бренд " << Brand << endl;
	cout << "имя слота " << Slotname << endl;
}

   /*      VendingMachine       */

VendingMachine::VendingMachine(const char *nammachine, int slotcount)
{
	Machname = nammachine;
	Count_slots = slotcount;
	
}
//VendingMachine::VendingMachine(Snack)
//{
	//Machname = nammachine;
	 // Count_slots = slotcount;

//}
// int VendingMachine::setslot(int slotcount);

int VendingMachine::addSlot(int slotcount)
{
	if (slotcount < count_slot_full)
	{
		slotcount++;
		return slotcount;
	}
	else
	{
		cout << "Слот переполен" << endl;
	}
}
int VendingMachine::getEmptySlotsCount()
{
	EmptySlotsCount=count_slot_full- Count_slots;
		return EmptySlotsCount;
}
void VendingMachine::Display()
{
	cout << "пустых слотов " << EmptySlotsCount<<endl;
}
//void VendingMachine::AddTypSlot()
//{
	// TypSlot = Snack.Snack_Name;
//}
