// 11 Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Chef
{
    public:
        void makeChicken()
        {
            cout << "The chef is making chicken" << endl;
        }
        void makeSalad()
        {
            cout << "The chef is making salad" << endl;
        }
        void makeSpecialDish()
        {
            cout << "The chef makes his special dish" << endl;
        }
};

class KoreanChef : public Chef
{
    public:
        void makeSpecialDish() 
        {
            cout << "Make the best food ever!" << endl;
        }
};

class MuricanChef : public Chef
{
    public:
        void makeSpecialDish()
        {
            cout << "Murica was made." << endl;
        }
};

int main()
{
    KoreanChef kChef;
    kChef.makeChicken();
    kChef.makeSalad();
    kChef.makeSpecialDish();


    MuricanChef mChef;
    mChef.makeSpecialDish();

    Chef chef;
    chef.makeSpecialDish();
}
