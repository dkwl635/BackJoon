#include <iostream>

using namespace std;

int main()
{
	int swap = 0;
	cin >> swap;

	int ball = 1;

	for (int i = 0; i < swap; i++)
	{
		int X, Y;
		cin >> X >> Y;

		if (X != ball && Y != ball) { continue; }

		if (X == ball) { ball = Y; }
		else { ball = X; }

	}
	cout << ball;

	return 0;
}