#include <iostream>

using namespace std;

int main()
{
	string str;
	bool Answer = true;
	
	cin >> str;

	int strLen = str.size()/2;
	int strLast = str.size() - 1;

	for (int i = 0; i < strLen; i++)
	{
		if (str[i] != str[strLast])
		{
			Answer = false;
			break;
		}
		strLast--;
	}

	cout << Answer;


}