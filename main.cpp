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
	 SnacksSlot *slot = new SnacksSlot("slot", 10, "brand1"); /*���������� ����������, ������� ���������� � ����*/
	 
	 cout<< "���������� ������ "<<slot->getSlotnom() << endl;
	 slot->  addSnackSlot();
	 //  SnacksSlot->addSnack(bounty); //��������� �������� � ����
	  slot->setBrand("snickers");
	 VendingMachine *machine = new VendingMachine("machine", 10); //���������� ������ ��� ������*
	  machine->addSlot(1); // �������� ���� ������� � �������
	 
	 cout << "������� ���������� ��������� ������ "<<machine->getEmptySlotsCount() << endl; // ������ �������� ���������� ������ ������ ��� ������
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