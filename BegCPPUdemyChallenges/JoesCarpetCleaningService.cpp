// JoesCarpetCleaningService.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>

using namespace std;
int main()
{
    cout << "--------------------------------------------" << endl;
    cout << "| Welcome to Joe's Carpet Cleaning Service |" << endl;
    cout << "--------------------------------------------" << endl;

    cout << "\n" << "How may we be of service today?" << endl;

    cout << "\n" << "$25 per Small Room (Before Tax)" << endl;
    cout << "$35 per Small Room (Before Tax)" << endl;
    cout << "Sales Taxes are 6.0%" << endl;

    
    cout << "\n" << "Enter in how many SMALL rooms do you need cleaned: ";
    double numOfSmallRooms;
    cin >> numOfSmallRooms;
    
    cout << "Enter in how many LARGE rooms do you need cleaned: ";
    double numOfLargeRooms;
    cin >> numOfLargeRooms;

    cout << "\n" << "Thank you for the information." << endl;
    cout << "Please wait while our gnomes prepare your final bill!" << endl;
    cout << "=====================================================" << endl;

    Sleep(800);

    double costOfSmallRooms = numOfSmallRooms * 25;
    double costOfLargeRooms = numOfLargeRooms * 35;
    double taxes = 0.06 * (costOfSmallRooms + costOfLargeRooms);
    double total = costOfSmallRooms + costOfLargeRooms + taxes;
    
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Final Estimate: $" << total << endl;
    cout << "Number of Small Rooms: " << numOfSmallRooms << endl;
    cout << "Cost of Small Room (PreTax): $" << costOfSmallRooms << endl;
    cout << "Number of Large Rooms: " << numOfLargeRooms << endl;
    cout << "Cost of Large Room (PreTax): $" << costOfLargeRooms << endl;
    cout << "Taxes: $" << taxes << "\n" << endl;

    cout << "Offer is valid for 30 days from date of issue" << endl;
}
