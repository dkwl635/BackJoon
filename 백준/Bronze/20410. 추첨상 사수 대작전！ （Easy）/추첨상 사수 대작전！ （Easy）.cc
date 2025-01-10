#include <iostream>

using namespace std;


int main()
{
	int M = 0, Seed =0, X1 = 0, X2 =0;
	int a = 1, c = 1;

	cin >> M >> Seed >> X1 >> X2;
	//a * Seed + c % M = X1

	int StartA = 2;
	int StartC = 2;
	while (true)
	{		
		int temp = (StartA * Seed + StartC) % M;
		if (temp == X1)
		{
			temp = (StartA * X1 + StartC) % M;
			if (temp == X2)
			{
				a = StartA;
				c = StartC;

				break;
			}
		}

		StartC++;
		if (StartC > M) { 
			StartC = 2;
			StartA++;
		}
	}

	cout << a << " " << c;

	return 0;
}