#include "header.h"
#include <cstdlib>
#include "automat.cpp"
using namespace std;

#include <iostream>
/*
������� �� ������� ������
*/
int main() 
{
		setlocale(LC_ALL, "");

		//Automatic() = default;
  //  ~Automatic() = default;
		//Automatic Automatic;
		Automatic *A = new Automatic("A");
		
	Snack *bounty = new Snack("Bounty");
	Snack* twix = new Snack("Twix", 200, 60.4);
	Snack* snickers = new Snack("Snickers");
	//Automatic* Slot = new SnackSlot(10/*���������� ����������, ������� ���������� � ����*/);
	//  Slot->addSnack("Bounty"); //��������� �������� � ����
	//Slot->addSnack("Snickers");
	//Automatic.A::set AutomatID = new AutomatID(FullSlots /*���������� ������ ��� ������*/);
	//Automat->addSlot(Slot); // �������� ���� ������� � �������
	// cout << machine->getEmptySlotsCount(); 
	//cout << Automatic::getEmptySlotsCount << endl; // ������ �������� ���������� ������ ������ ��� ������
	//cout << bounty.ShowSnack() << endl;
//	twix->ShowSnack();
	//std::cout<< bounty& ->bounty.ShowSnack() << endl;
	//cout << getName_Snack.bounty << endl;
	delete Automatic;
	delete Snack;
	//delete Slot;
	//delete snickers;
	//delete bounty;
	//~Automatic() = default;

}