#include <iostream>

using namespace std;

int main()
{
	int size;
	int state;
	cin >> size;

	char** str = new char* [size];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			str[i] = new char[size];
		}
		
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cin >> str[i][j];
		}
	}

	cin >> state;
	if (state == 1)
	{	
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				cout << str[i][j];
			}
			cout << endl;
		}
	}
	else if (state == 2)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = size -1 ; j >= 0; j--)
			{
				cout << str[i][j];
			}
			cout << endl;
		}
	}
	else if (state == 3)
	{
		for (int i = size - 1; i >= 0; i--)
		{
			for (int j = 0; j < size; j++)
			{
				cout << str[i][j];
			}
			cout << endl;
		}
	}
	
	


	for (int i = 0; i < size; i++)
	{
		delete str[i];
	}
	delete[] str;
}