// SecretEncoder.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h>

using namespace std;

void ProcessingMessage();

int main()
{
	string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string key = "rGeSmoyLXbiPUDtHdnYgaxQfczWZOEFsVKqjpCuJhMvABRIwklTN";

	string unencryptedMessage;
	cout << "Enter in the message: ";
	getline(cin, unencryptedMessage);
	
	cout << "\n";
	
	cout << "\n";

	cout << "----------Processing Message----------" << endl;
	Sleep(1000);

	for (size_t i = 0; i < unencryptedMessage.length(); i++)
	{
		if (isalpha(unencryptedMessage[i]))
		{
			int indexOf = alphabet.find(unencryptedMessage[i]);
			unencryptedMessage[i] = key[indexOf];
		}
	}
	
	cout << "\n";
	cout << "DONE! Your Secret Message is: ";
	cout << unencryptedMessage;

	cout << "\n";
	cout << "If you want to decode this message reference the Secret Decoder.";
}

void ProcessingMessage()
{
	string processing = "----------Processing----------";
	string printMessage;
	
	for (size_t i = 0; i < processing.length(); i++)
	{
		system("CLS");
		printMessage[i] += processing[i];
		cout << printMessage;
	}

}