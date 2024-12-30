#include "iostream"
#include "string"
#include "vector"
using namespace std;
int main()
{
	int blank[10] = { 4, 2,3,3,3,3,3,3,3,3 };
	vector<int> arr;
	string str = "1234";
	while(true)
	{
		cin >> str;
		if (str == "0") { break; }

		int answer = 1;
		for (int i = 0; i < str.size(); i++)
		{
			int charint = str[i] - '0';
			answer += blank[charint] + 1;
		}
		arr.push_back(answer);
	}

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << endl;
	}


	
}