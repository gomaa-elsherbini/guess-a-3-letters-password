#include <iostream>
#include <string>
using namespace std;



string readPassword()
{
	string pass;
	cout << "please enter 3 capital letters as a password ?\n";
	cin >> pass;
	return pass;
}

//int getLength(string str)
//{
//	int length = 0;
//	int i = 0;
//	while (str[i])
//	{
//		length++;
//		i++;
//	}
//	return length;
//}


void checkPassword(string pass)
{
	int counter = 0;
	string letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string formedPassword = "";

	for (int i = 0; i < 26; i++)
	{
		for (int x = 0; x <= 26; x++)
		{
			for (int y = 0; y <26 ; y++)
			{
				formedPassword += letters[i];
				formedPassword += letters[x];
				formedPassword += letters[y];

				if (pass == formedPassword)
				{
					cout << "===========================================\n";
					cout << "Password is " << pass << endl;
					cout << "Found after " << counter+1 << " Trail(s)\n";
					cout << "===========================================\n";
					return;
				}

				formedPassword = "";
				counter++;
			}
			cout << endl;
		}
	}
}

int main()
{
	checkPassword(readPassword());

	return 0;
}