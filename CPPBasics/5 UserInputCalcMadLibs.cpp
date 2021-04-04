// 5 UserInputCalcMadLibs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    ////getting a users age
    //int age;
    //cout << "Enter in your age: ";
    //cin >> age;
    //cout << "You are " << age << " years old." << endl;

    //IF I WANT A STRING OF TEXT
    //string name;
    //cout << "Enter in your name: ";
    //getline(cin, name); //strings of text
    //cout << "Hello " << name << ", how are you?" << endl;

    ////Calculator
    //double firstNum, secondNum;
    //cout << "Enter in the first number: ";
    //cin >> firstNum;

    ////double secondNum;
    //cout << "Enter in the second number: ";
    //cin >> secondNum;

    //char operatorForCalc;
    //cout << "Enter in the operator of choice: ";
    //cin >> operatorForCalc;

    //string result = "Your resulting number is: ";
    //if (operatorForCalc == '+')
    //{
    //    cout << result << firstNum + secondNum;
    //}
    //
    //else if (operatorForCalc == '-')
    //{
    //    cout << result << firstNum - secondNum;
    //}

    //else if (operatorForCalc == '/')
    //{
    //    cout << result << firstNum / secondNum;
    //}

    //else if (operatorForCalc == '*')
    //{
    //    cout << result << firstNum * secondNum;
    //}
    
    //else
    //cout << "Invalid Operator.";

    //MadLibs
    string noun, color, noun2, color2;

    cout << "Enter in a noun: ";
    getline(cin, noun);

    cout << "Enter in a color: ";
    getline(cin, color);

    cout << "Enter in another noun: ";
    getline(cin, noun2);

    cout << "Enter in another color: ";
    getline(cin, color2);

    cout << "\n" << noun << " are " << color << ".\n" << noun2 << " are " << color2 << "." << endl;
}
