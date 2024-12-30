#include <iostream>

using namespace std;

int main()
{
	
	long long Hop = 0;
	long long input = 0;
	long long temp = 0;
	int count = 0;
	long long check = 0;
	char Answer[3] = { };

	for (int i = 0; i < 3; i++)
	{
		Hop = 0;
		input = 0;
		temp = 0;
		count = 0;
		check = 0;

		cin >> count;
		
		for (int j = 0; j < count; j++)
		{
			temp = Hop;
			cin >> input;
			Hop += input;

			if (temp > 0 && input > 0 && Hop < 0) { check++; }
			if (temp < 0 && input < 0 && Hop  > 0) { check--; }
		}

		if (check == 0)
		{
			if (Hop == 0)
			{
				Answer[i] = '0';
			}
			else if (Hop > 0)
			{
				Answer[i] = '+';
			}
			else if (Hop < 0)
			{
				Answer[i] = '-';
			}
		}
		else
		{

			if (check > 0)
			{
				Answer[i] = '+';
			}
			else if (check < 0)
			{
				Answer[i] = '-';
			}
		}
		
	}

	for (int i = 0; i < 3; i++)
	{
		cout << Answer[i] << endl;
	}
}

