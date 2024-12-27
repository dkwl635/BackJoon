#include <iostream>
#include <map>
using namespace std;

int main()
{
	string str;
	
	cin >> str;
	map<char ,int> Alphabet;

	
	for (int i = 0; i < str.size(); i++)
	{
		char C = str[i];
		if (C >= 97)
		{
			C -= 32;
		}

		if (Alphabet.find(C) == Alphabet.end())
		{
			Alphabet.insert(pair<char, int>(C , 1));
		}
		else
		{
			Alphabet[C]++;
		}
		
	}

	int Size = 0;
	char Answer = ' ';
	
	for (map<char , int>::iterator iter = Alphabet.begin();  iter != Alphabet.end() ;  iter++)
	{
		if (iter->second > Size)
		{
			Answer = iter->first;
			Size = iter->second;
		}
		else if(iter->second == Size)
		{
			Answer = '?';
		}
	}


	cout << Answer;
}