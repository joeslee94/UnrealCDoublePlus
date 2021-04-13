// VectorsAndMethods.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vector1;
    vector1.push_back(10);
    vector1.push_back(20);

    for (unsigned int i = 0; i < vector1.size(); i++)
    {
        cout << vector1[i] << endl;
    }

    vector<int> vector2;
    vector2.push_back(100);
    vector2.push_back(200);

    for (unsigned int i = 0; i < vector1.size(); i++)
    {
        cout << "Vector 1: ";
        cout << vector1[i] << endl;

        cout << "Vector 2: ";
        cout << vector1[i] << endl;
    }

    vector1.at(0) = 1000;

    cout << "===============2D Vector==============" << endl;
    vector<vector<int>> vectorTwoD;
    vectorTwoD.push_back(vector1);
    vectorTwoD.push_back(vector2);
    
    vectorTwoD.at(0).at(0) = 10000;
    for (unsigned int i = 0; i < vectorTwoD.size(); i++)
    {
        for (unsigned int j = 0; j < vectorTwoD[i].size(); j++)
        {
            cout << vectorTwoD[i][j] << endl;
        }
    }

    std::cout << "Hello World!\n";
}

