// 9 Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //pointers and memory addresses
    int age = 20;
    int *pAge = &age;

    double gpa = 2.7;
    double *pGPA = &gpa;

    string name = "Joe";
    string* pName = &name;

    cout << "Age: " << pAge << " " << *pAge << " " << &*pAge << " "; //pointers keep changing
}


