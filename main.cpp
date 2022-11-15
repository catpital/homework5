// Snack automat
#include "Automat.h"
//#include "Snack.cpp"
#include <iostream>
#include <cstdlib>
//#include <stdio.h>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	
	
	Snack *Bounty = new Snack("Bounty", 200, 20);
	Snack *snickers = new Snack("Snickers",350,15);
	 SnacksSlot *slot = new SnacksSlot("slot", 10, "brand1"); /*количество батончиков, которые помещаютс€ в слот*/
	 
	 cout<< "количество слотов "<<slot->getSlotnom() << endl;
	 slot->  addSnackSlot();
	 //  SnacksSlot->addSnack(bounty); //ƒобавл€ем батончик в слот
	  slot->setBrand("snickers");
	 VendingMachine *machine = new VendingMachine("machine", 10); // оличество слотов дл€ снеков*
	  machine->addSlot(1); // ѕомещаем слот обратно в аппарат
	 
	 cout << "текущее количество свободных слотов "<<machine->getEmptySlotsCount() << endl; // ƒолжно выводить количество пустых слотов дл€ снеков
	//  delete machine;
	Bounty->DisplaySnack();
	 cout << endl;
	 snickers->DisplaySnack();
	 slot->Display();
	delete slot;
	delete snickers;
	delete Bounty;
	//~Snack();
}