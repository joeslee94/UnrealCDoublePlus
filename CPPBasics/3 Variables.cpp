// 3 Variables.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //std:: means using namespace std;
    std::cout << "Hello World!\n";
    string name = "John";
    int age = 70;
    string nameTwo = "James";
    int ageTwo = 40;
    //cout << "There once was a man named " + name + "\n";
    cout << "There once was a man named " << name << ".\n";
    cout << name + " was " << age << " years old\n";
    cout << name + " wished he was 10 years younger.\n";
    cout << name + " stole " + nameTwo + "'s identity.\n";
    cout << name + " is now " << ageTwo << ".\n";
    cout << nameTwo + " is now dead.";
    return 0;
}


