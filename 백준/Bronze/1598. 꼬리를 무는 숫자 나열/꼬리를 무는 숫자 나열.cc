#include <iostream>

using namespace std;

int main()
{
	int numA, numB;
	cin >> numA >> numB;
	numA--;
	numB--;

	int numAX, numAY, numBX, numBY;
	numAX = numA / 4;
	numAY = numA % 4;
	

	numBX = numB / 4;
	numBY = numB % 4;
	

	int X, Y;
	X = numAX > numBX ? numAX - numBX : numBX - numAX;
	Y = numAY > numBY ? numAY - numBY : numBY - numAY;

	cout << X + Y;
	return 0;
}