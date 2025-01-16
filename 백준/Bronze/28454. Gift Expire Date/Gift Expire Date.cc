#include <iostream>
#include <string>
using namespace std;

int main()
{
	int answer = 0;

	string today;
	cin >> today;

	string strY = today.substr(0, 4);
	string strM = today.substr(5, 2);
	string strD = today.substr(8, 2);
	string strYMD = strY + strM + strD;

	//현제 날짜 분리
	int YMD = stoi(strYMD);


	int N = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string Gift;
		cin >> Gift;
		//기프트콘 날짜 분리
		string Gift_strY = Gift.substr(0, 4);
		string Gift_strM = Gift.substr(5, 2);
		string Gift_strD = Gift.substr(8, 2);

		string Gift_strYMD = Gift_strY + Gift_strM + Gift_strD;

		int Gift_YMD = stoi(Gift_strYMD);

		//날짜 지난거 체크
		if (Gift_YMD < YMD) { continue; }


		//걸러지지 않으면 사용 가능한것
		answer++;
	}

	cout << answer;
	return 0;
}