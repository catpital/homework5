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
	SnacksSlot *slot = new SnacksSlot("slot", 10, "brand1"); /*���������� ����������, ������� ���������� � ����*/
	 cout<< "���������� ������ "<<slot->getSlotnom() << endl;
	 slot->  addSnackSlot();
	 slot->setBrand("snickers");
	 VendingMachine *machine = new VendingMachine("machine", 10); //���������� ������ ��� ������*
	 machine->addSlot(1, "bounty"); // �������� ���� ������� � �������
	cout << "������� ���������� ��������� ������ "<<machine->getEmptySlotsCount() << endl; // ������ �������� ���������� ������ ������ ��� ������
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