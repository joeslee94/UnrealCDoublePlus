// 7 FunctionReturnIfSwitchWhile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

//function needs to be above OR its stub
void sayHello(string name);
string whatIsYourAge(string age);
double cube(double num);
string IfStatementList(string name);
string switchGetDayOfWeek(int dayNum);
void findMyNumber(int guessMyNum);

int main()
{
    /*string name;
    cout << "What's your name? ";
    getline(cin, name);
    sayHello(name);*/
    
    /*string age;
    cout << "Enter in your age: ";
    getline(cin, age);
    cout << whatIsYourAge(age);*/

    //cout << cube(5);

    //string name;
    //cout << "Enter in your name: ";
    //getline(cin, name);
    //cout << IfStatementList(name);

    //cout << switchGetDayOfWeek(0);
    //cout << switchGetDayOfWeek(2);
    //cout << switchGetDayOfWeek(4);
    //cout << switchGetDayOfWeek(6);
    //cout << switchGetDayOfWeek(7);

    srand(time(0));
    int guessMyNum = rand() % 101;
    findMyNumber(guessMyNum);
}

void findMyNumber(int guessMyNum)
{
    cout << "I'm thinking of a number.\n";
    
    int guess;

    cout << "\nGuess a number: ";
    cin >> guess;

    int guessCount = 0;
    int guessLimit = 10;

    while (guessMyNum != guess && guessLimit > 0)
    {
        guessCount++;
        guessLimit--;

        if (guess == guessMyNum + 1 || guess == guessMyNum - 1)
        {
            cout << "\nSuper Close!\n";
        }
        else if (guess > guessMyNum)
        {
            cout << "\nYour guess was too high\n";
        }
        else if (guess < guessMyNum)
        {
            cout << "\nYour guess was too low\n";
        }
        cout << "\nGuess a number: ";
        cin >> guess;
    }

    if (guessLimit == 0)
    {
        char tryAgain;
        cout << "You ran out of guesses! Try Again? Y/N: ";
        cin >> tryAgain;
        if (tryAgain == 'Y')
        {
            findMyNumber(guessMyNum);
        }
        else
        {
            cout << "\nThanks for playing.";
        }
    }
    else
    {
        cout << "\nYou guessed the number! The number was " << guessMyNum << endl;
        cout << "It took you " << guessCount << " tries." << endl;
    }
}

string switchGetDayOfWeek(int dayNum)
{
    string dayName;
    switch (dayNum)
    {
        case 0: dayName = "Sunday";
            break;
        case 1:  dayName = "Monday";
            break;
        case 2: dayName = "Tuesday";
            break;
        case 3: dayName = "Wednesday";
            break;
        case 4: dayName = "Thursday";
            break;
        case 5: dayName = "Friday";
            break;
        case 6: dayName = "saturday";
            break;
        default: dayName = "Invalid input";
            break;
    }
    return dayName;
}

string IfStatementList(string name)
{
    string helloMessage = "";
    //same operations as C# &&, ||, !, <, >, <=, >= etc
    if (name.length() > 0)
    {
        helloMessage += "Hello " + name;
    }
    else
    {
        helloMessage += "You did not enter in a valid name.";
    }

    return helloMessage;
}

void sayHello(string name)
{
    cout << "Hello, " << name << endl;
}

string whatIsYourAge(string age)
{
    string yourAge = "Your age is " + age;
    return yourAge;
}

double cube(double num)
{
    return pow(num, 3);
}