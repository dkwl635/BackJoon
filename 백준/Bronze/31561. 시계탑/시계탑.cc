#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//입력 값
	int M;
	cin >> M;

	float answer = 0.0f;
	//30분 체크
	if (M > 30) // 30분 넘어서 계산
	{
		answer = 15.f + ((M - 30.f) * 1.5f);
	}
	else
	{
		answer = (float)M / 2;
	}

	

	printf("%.1f", answer);

	return 0;
}