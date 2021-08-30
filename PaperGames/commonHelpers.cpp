#include <iostream>
#include "commonHelpers.h"

using std::cout;
using std::cin;


namespace project
{

	int getInt(const char* prompt)
	{
		int i;
		bool ok = false;
		if (prompt != nullptr)
			cout << prompt;
		do
		{
			cin >> i;
			if (cin.fail())
			{
				cout << "Bad integer value, try again: ";
				cin.clear();
				cin.ignore(1000, '\n');
			}
			else if (char(cin.get()) != '\n')
			{
				cout << "Enter only an integer, try again: ";
				cin.ignore(1000, '\n');
			}
			else
				ok = true;
		} while (ok == false);
		return i;
	}
	int getInt(int min, int max, const char* prompt, const char* errorMessage, bool showRangeAtError)
	{
		int i;
		if (prompt != nullptr)
			cout << prompt;
		do
		{
			i = getInt();
			if (i < min || i > max)
			{
				if (errorMessage != nullptr)
					cout << errorMessage;
				if (showRangeAtError == true)
				{
					cout << "[";
					cout << min;
					cout << " <= value <= ";
					cout << max;
					cout << "]";
					cout << ": ";
				}
			}
		} while (i < min || i > max);
		return i;
	}
}