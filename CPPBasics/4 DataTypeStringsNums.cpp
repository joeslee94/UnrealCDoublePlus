// 4 DataTypeStringsNums.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Characters and Strings\n";
    char charOne = 'A';
    string stringOne = "This is a string";
    cout << charOne << " " << stringOne << "\n";

    //numbers
    cout << "\nWe will now look at numbers.\n";
    int intOne = 50;
    float lessSpecificDecimalPoint = 4.23f;
    double moreSpecificDecimalPoint = 5.78954312;
    cout << intOne << " " << lessSpecificDecimalPoint << " " << moreSpecificDecimalPoint << "\n" << endl;

    //booleans
    bool booleanOne = true; //prints as 1
    bool booleanTwo = false; //prints as 0
    cout << booleanOne << " " << booleanTwo << endl;

    //Working with strings
    cout << "\nWorking with strings!" << endl;
    string stringTwo = "a random string that will have a function done on it";
    int stringTwoLength = stringTwo.length();
    char firstLetter = stringTwo[0];
    int idxPositionOfRandom = stringTwo.find("random");
    string subString = stringTwo.substr(9);
    cout << "The string we will be working on: " << stringTwo << endl;
    cout << "The first letter in the string: " << firstLetter << endl;
    cout << "The length of the string: " << stringTwoLength << endl;
    cout << "Random starts at: " << idxPositionOfRandom << endl;
    cout << "A substring that starts at string: " << subString << endl << endl;

    //Working with numbers
    cout << "Working with numbers" << endl;
    cout << 40 << " " << -40.6893 << " " << 1 + 1 << " " << 2 * 2 << " " << 2 / 2 << " " << 2 - 2 << " " << 10 % 3 << endl;
    //follows PEMDAS
    //incrementing numbers is the same as C# ++, --
    //also can overload operators +,-,*,/ =
    //decimal + integer = decimal back
    //integer / integer = integer ex should be 10/3 != 3.333 BUT 10/3 = 3
    //Math functions I need to import!
    int exponent = pow(2, 5);
    int sqrRoot = sqrt(36);
    //round, ceil, floor, fmax returns max between two nums, fmin returns min between two nums
    cout << exponent << " " << sqrRoot << endl;
}