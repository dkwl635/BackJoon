#include <iostream>
using namespace std;

int main()
{
	string str;
	
	cin >> str;
	int arr[26] = { 0, };
	
	for (int i = 0; i < str.size(); i++)
	{
		char C = str[i];
		if (C >= 97)
		{
			C -= 32;
		}
		C -= 65;

		arr[C] = arr[C] + 1;
		
	}

	int Size = 0;
	char Answer = ' ';
	for (int i = 0; i < 26; i++)
	{
		if (arr[i]> Size)
		{
			Answer = i + 65;
			Size = arr[i];
		}
		else if (arr[i] == Size)
		{
			Answer = '?';
		}
	}



	cout << Answer;
}