// 8 ForNestedLoops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;
int exponentPower(int baseNum, int powerNum);

int main()
{
	//for (int i = 0; i < 20; i+=2)
	//{
	//	cout << i << " ";
	//}

	//cout << exponentPower(3, 3);

	//2D Array
	int numberGrid[3][3] =
	{
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 }
	};

	//Nested For Loops
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << numberGrid[i][j];
		}
	}
}

int exponentPower(int baseNum, int powerNum)
{
	int result = 1;
	for (int i = 0; i < powerNum; i++)
	{
		result *= baseNum;
	}
	return result;
}