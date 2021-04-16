// NumsNumsNums.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

void printNums(vector<int> listForEval);
vector<int> addNums(vector<int> listForEval);
void avgNums(vector<int> listForEval);
void minNum(vector<int> listForEval);
void maxNum(vector<int> listForEval);


int main()
{
	cout << "            PAMIX" << endl;
	cout << "-------------------------------" << endl;
	cout << "P to Print the numbers" << endl;
	cout << "A to Add a number to the list" << endl;
	cout << "M for the Mean of the numbers" << endl;
	cout << "I for the Min of the numbers" << endl;
	cout << "X for the Max the numbers" << endl;
	cout << "Q to Quit" << endl;
	cout << "Enter in your choice: ";

	char choice;
	cin >> choice;
	tolower(choice);

	if (choice == 'q')
	{
		return 0;
	}
	
	vector<int> listForEval = vector<int>();
	unsigned int sizeOfVector;

	bool programRunning = true;

	while (programRunning)
	{
		if (!listForEval.empty())
		{
			cout << "Enter in your choice: ";

			char choice;
			cin >> choice;
			tolower(choice);

			switch (choice)
			{
				case 'p':
					printNums(listForEval);
					break;
				case 'a':
					cout << "Enter in a number to add to the vector: ";
					listForEval = addNums(listForEval);
					sizeOfVector = listForEval.size();
					cout << "You added " << listForEval.at(sizeOfVector - 1) << "." << endl;
					break;
				case 'm':
					avgNums(listForEval);
					break;
				case 'i':
					minNum(listForEval);
					break;
				case 'x':
					maxNum(listForEval);
					break;
				case 'q':
					cout << "Thanks for stopping by!";
					programRunning = false;
					break;
				default:
					cout << "Not a valid choice!";
					break;
			}
		}
		else
		{
			cout << "The vector is empty, you need to add elements to the list." << endl;
			cout << "Enter in a number to add to the vector: ";
			listForEval = addNums(listForEval);
			sizeOfVector = listForEval.size();
			cout << "You added " << listForEval.at(sizeOfVector - 1) << "." << endl;
		}
	}
}

void printNums(vector<int> listForEval)
{
	cout << "Your list currently contains the following numbers:";

	cout << " [ ";

	for (unsigned int i = 0; i < listForEval.size(); i++)
	{
		cout << listForEval[i] << " ";
	}
	
	cout << "]" << endl;
}

vector<int> addNums(vector<int> listForEval)
{
	int add;
	cin >> add;
	listForEval.push_back(add);
	return listForEval;
}

void avgNums(vector<int> listForEval)
{
	double sum = 0;
	double size = listForEval.size();

	for (unsigned int i = 0; i < listForEval.size(); i++)
	{
		sum += listForEval[i];
	}

	double average = sum / size;

	cout << "The average of the group of numbers is " << average << endl;
}

void minNum(vector<int> listForEval)
{
	int minNum = listForEval[0];

	for (unsigned int i = 0; i < listForEval.size(); i++)
	{
		if (minNum > listForEval[i])
		{
			minNum = listForEval[i];
		}
	}

	cout << "The minimum value in this list is: " << minNum << endl;
}

void maxNum(vector<int> listForEval)
{
	int maxNum = listForEval[0];

	for (unsigned int i = 0; i < listForEval.size(); i++)
	{
		if (maxNum < listForEval[i])
		{
			maxNum = listForEval[i];
		}
	}

	cout << "The maximum value in this list is: " << maxNum << endl;
}