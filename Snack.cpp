#include "Automat.h"
#include <iostream>
#include <cstdlib>
//#include <stdio.h>
#include <locale.h>
using namespace std;
Snack::Snack(const char* name, int calori, float price)
{
	Snack_Name = name;
	Calorrii = calori;
	Snack_Price = price;
}
Snack::Snack(const char* name, int calori)
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

void Snack::DisplaySnack()
{
	cout << "Название снека " << Snack_Name << endl;
	cout << "Калорий " << Calorrii << endl;
	cout << "Цена " << Snack_Price << endl;

}
const char* Snack::getSnack_Name() const
    {
	return Snack_Name;
	}
//friend ostream& operator<<(ostream& output, const Snack& name);
//void Snack::setSnack_Name(const char* name)
//{
	//Snack_Name = name;
//}
//int Snack::getCalorrii()
//{
	//return Calorrii;
//}
//void Snack::Calorrii(int) 
//{
	//Calorrii = calori;

//}
//void Snack:: Snack_Price(float price)
//{
	//Snack_Price = price;
//}

//float Snack::getSnack_Price() const
//{
	//return Snack_Price;
//}
//SnackSlot::SnackSlot(int Slot, char br_nane)
//{}

SnackSlot::SnackSlot(const char *name, int sslot, char sn_brand)
{
	Slotname = name;
	Slot_nom = sslot;
	Brand = sn_brand;
}

SnackSlot::SnackSlot(const char *name)
{
	Slotname = name;
}
SnackSlot::SnackSlot(const char *name, int sslot)
{
	Slotname = name;
	Slot_nom = sslot;
}

void SnackSlot::setSlotname(const char *name)
{
	Slotname = name;
}
void SnackSlot::setBrand(char sn_brand)
{
	Brand = sn_brand;
}
void SnackSlot::setSlot_nom(int sslot )
{
	Slot_nom = sslot;
}