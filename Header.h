#pragma once
#include <iostream>
//#include "automat.cpp"
using namespace std;
class Automatic
{
  //Automatic() = default;
  //  ~Automatic() = default;
private:
    const char* Automatname;
    const long AutomatID;
    const char Adress;
    const char VenderName;
    const int Fullslots;

public:
    int EmptySlotsCount;
    int Slot_count;
    char NameSnack;
   // Snack snack;
    void initAutomatic(const char* Automatname, long AutomatID, const char Adress, const char VenderName, const int Fullslots, int EmptySlotsCount, int Slot_count, char NameSnack)
    {}
    //void Automatic(const char* Automatname)
    //{}
   // void initAutomatic(const char* Automatname, long AutomatID, const char Adress, const char VenderName, const int Fullslots)
    //{}
    //void initAutomatic(int EmptySlotsCount)
    //{}
    void setAutomatname(char * Automatname)
    {}
    void getEmptySlotsCount(int EmptySlotsCount)
    {
        // return (EmptySlotsCount);
        // automat.EmptySlotsCount = EmptySlotsCount;
    }
    void displayAutomatic()
    {
        cout << "��� ����� ��������: " << Automatname << endl;
        cout << "������ ��������: " << AutomatID << endl;
        cout << "����� ���������: " << Adress << endl;
        cout << "�������� �������: " << VenderName << endl;
        cout << "���������� ��������� ����� " << Fullslots << endl;
        cout << "���������� ��������� ������: " << EmptySlotsCount << endl;
        cout << "����� � �������� " << NameSnack << endl;
    }
    
    
    
    
    //~Automatic();
//  ~Automatic() = default;
};

class Vender
{
    const char VenderName;
    const char contact_adress;
    char phone_nom;
// ~Vender();
};
class Snack
{
public:
    const char *Name_Snack;
    int �alorrii_Snack;
    float Price_Snack;
    void initSnack(const char* name, int calori, float price)
    {
        Name_Snack = name;
        �alorrii_Snack = calori;
        Price_Snack = price;
    }
    Snack(const char *name, int calori, float price)
    {}
    Snack(const char *name)
    {}
    Snack(const char *name, int calori)
    {}
    Snack(float price)
    {}
    //void setName_Snack(const char* name)
    //{
      //  Name_Snack = name;
    //}

    void ShowSnack()
    {
        cout << Name_Snack << endl;
        cout << �alorrii_Snack << endl;
        cout << Price_Snack << endl;
    }
    const char* getName_Snack()
    {
        return Name_Snack;
    }
    void setName_Snack(char* name)
    {
        //return NameSnack;
       Name_Snack = name;
    }
    void setCalorrii_Snack(int calori)
    {
        �alorrii_Snack = calori;
    }
    void setPrice_Snack(float price)
    {
        Price_Snack = price;
    }

};

