#include <iostream>
#include <set>


using namespace std;

int main()
{

	int x;
	cin >> x;
	int Answer = 0;
	for (int i = 0; i < x; i++)
	{
		string str;
		cin >> str;

		set<char> CheckStr;
		bool bConitnuos = true;
		char lastChar = ' ';

		for (int y = 0; y < str.size(); y++)
		{
			char c = str[y];

			if (!(lastChar == c))
			{
				if (CheckStr.find(c) != CheckStr.end())
				{
					bConitnuos = false;
					break;
				}
				
				CheckStr.insert(c);
				lastChar = c;
			}

		}

		if (bConitnuos)
		{
			Answer++;
		}
	}

	cout << Answer;

}
