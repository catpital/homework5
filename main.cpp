#include "Automat.h"
//#include "Snack.cpp"
#include <iostream>
#include <cstdlib>
//#include <stdio.h>
#include <locale.h>
using namespace std;
int main()
{
	// Snack automat
	// Snack snack;
	Snack *Bounty = new Snack("Bounty", 200, 20);
	// Snack::Bounty("bounty", 200, 2.0);
	Snack *snickers = new Snack("Snickers");
	SnackSlot *slot = new SnackSlot("slot",10);/*количество батончиков, которые помещаютс€ в слот*/
	//slot->addSnack(bounty); //ƒобавл€ем батончик в слот
	//slot->addSnack(snickers);
	//VendingMachine* machine = new VendingMachine(slotCount /* оличество слотов дл€ снеков*/);
	//machine->addSlot(slot); // ѕомещаем слот обратно в аппарат
	//cout << machine->getEmptySlotsCount(); // ƒолжно выводить количество пустых слотов дл€ снеков
	//delete machine;
	//delete slot;
	// cout << Snack_Name::Snack<< endl;
  // cout << Bounty.Snack_Name << endl;
//	std::basic_ostream < Snack_Name.Bounty;
	//cout << Bounty.DisplaySnack() << endl;
	delete slot;
	delete snickers;
	delete Bounty;
	//~Snack();
}