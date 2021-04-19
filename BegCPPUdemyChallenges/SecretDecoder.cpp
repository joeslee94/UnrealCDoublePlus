// SecretDecoder.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h>

using namespace std;

void ProcessingMessage();

int main()
{
	string key = "rGeSmoyLXbiPUDtHdnYgaxQfczWZOEFsVKqjpCuJhMvABRIwklTN";
	string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	string encryptedMessage;
	cout << "Enter in the Secret: ";
	getline(cin, encryptedMessage);

	cout << "\n";

	cout << "\n";

	cout << "----------Unencrypting Message----------" << endl;
	Sleep(1000);

	for (size_t i = 0; i < encryptedMessage.length(); i++)
	{
		if (isalpha(encryptedMessage[i]))
		{
			int indexOf = key.find(encryptedMessage[i]);
			encryptedMessage[i] = alphabet[indexOf];
		}
	}

	cout << "\n";
	cout << "DONE! Your Original Message is: ";
	cout << encryptedMessage;

	cout << "\n";
	cout << "If you want to encode this message reference the Secret Encoder.";
}