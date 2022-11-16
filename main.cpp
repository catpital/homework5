// Snack automat
#include "Automat.h"
//#include "Snack.cpp"
#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	
	
	Snack *Bounty = new Snack("Bounty", 200, 20);
	Snack *snickers = new Snack("Snickers",350,15);
	SnacksSlot *slot = new SnacksSlot("slot", 10, "brand1"); /*количество батончиков, которые помещаются в слот*/
	 cout<< "количество слотов "<<slot->getSlotnom() << endl;
	 slot->  addSnackSlot();
	 slot->setBrand("snickers");
	 VendingMachine *machine = new VendingMachine("machine", 10); //Количество слотов для снеков*
	 machine->addSlot(1, "bounty"); // Помещаем слот обратно в аппарат
	cout << "текущее количество свободных слотов "<<machine->getEmptySlotsCount() << endl; // Должно выводить количество пустых слотов для снеков
	Bounty->DisplaySnack();
	 cout << endl;
	 snickers->DisplaySnack();
	 cout << endl;
	 Bounty->DisplaySnack();
	 cout << endl;
	 slot->Display();
	 cout << endl; machine->Display();
    delete machine;
	delete slot;
	delete snickers;
	delete Bounty;
	
}