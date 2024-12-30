#include "iostream"

using namespace std;
int main()
{
	int N;
	cin >> N;
	int CoinY = 0;
	int CoinM = 0;
	for (int i = 0; i < N; i++)
	{
		int Time;
		cin >> Time;
		Time++;

		CoinY += (((Time / 30)*10) + ((Time % 30) != 0 ? 10 : 0));
		CoinM += (((Time / 60)* 15) + ((Time % 30) != 0 ? 15 : 0));
	}

	if (CoinY < CoinM) { cout << "Y " << CoinY; }
	else if (CoinM < CoinY){ cout << "M " << CoinM; }
	else { cout << "Y M " << CoinY; }
	
}