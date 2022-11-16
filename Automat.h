#pragma once
#include <iostream>

class Snack 
{
public:
	Snack(const char *name, int calori, float price);
	Snack(const char *name, int calori);
	Snack(const char *name);
	Snack(float price);

	void setname(const char *name);
	void DisplaySnack();
	const char* getSnack_Name() const;
	void setSnack_Name(const char *name);
	void setCalorrii(int calori);
	void Show();
	int getCalorrii() const;
	void setSnack_Price(float price);
		
private:
	const char *Snack_Name;
	int Calorrii;
	float Snack_Price;
	
};

class SnacksSlot
{
	public:
		Snack Snack();
		SnacksSlot(const char* sname, int sslot, const char* snbrand);
		int getSlotnom();
	void setSlot_nom(int sslot);
	void setBrand(const char *snbrand);
	void Display();
	void addSnackSlot();
	void addSnack(const char* snbrand);
	SnacksSlot(const SnacksSlot& other);

	~SnacksSlot() = default;

	//SnacksSlot& operator++();
	//SnacksSlot& operator--();
			
private:
	const char *Slotname;
	int Slot_nom;
	const char *Brand;
};

class VendingMachine
{
public:
	VendingMachine(const char *nammachine, int slotcount, const char *Slotname);
	VendingMachine(const char* nammachine, int slotcount);

	const char *Machname;
	friend class Snack;
	friend class SnackSlot;
	// SnacksSlot SnacksSlot(Brend);
	int EmptySlotsCount;
	int Count_slots;
	const char *SLname;
	int addSlot(int slotcount, const char *Slotname);
	int setslot(int slotcount);
	int getEmptySlotsCount();
	void Display();
	void AddTypSlot();
	

	~VendingMachine() = default;

private:
	int count_slot_full = 100;

};