#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string str;

	while (true)
	{
		//cin >> str;
		getline(cin, str);
		if (str == ".") { break; }
		stack<char> S;

		for (char& c : str)
		{
			if (c == ')' || c == ']')
			{
				if (S.empty())
				{
					S.push(c);
					break;
				}
			}

			if (c == ')')
			{
				if (S.top() == '(')
				{
					S.pop();
				}
				else
				{
					break;
				}
			}
			else if (c == ']')
			{
				if (S.top() == '[')
				{
					S.pop();
				}
				else
				{
					break;
				}
			}
			else if (c == '(' || c == '[')
			{
				S.push(c);
			}

		}

		if (S.empty())
		{
			cout << "yes\n";
		}
		else
		{
			cout << "no\n";
		}
	}


	return 0;
}