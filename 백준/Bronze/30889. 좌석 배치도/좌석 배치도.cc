#include <iostream>
#include <string>
using namespace std;

int main()
{
	char seat[10][20] = { '.' };
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			seat[i][j] = '.';
		}
	}

	int N;
	cin >> N;

	for (int i = 0 ; i < N ; i++)
	{
		string str;
		cin >> str;

		int front = str[0] - 'A';
		str.erase(0, 1);
		int back = stoi(str);
		back--;

		seat[front][back] = 'o';
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			cout << seat[i][j];
		}
		cout << endl;
	}

	return 0;
}