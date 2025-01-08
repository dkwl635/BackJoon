#include <iostream> 
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, K;

	cin >> N >> K;
	vector<int> num;
	num.push_back(1);
	num.push_back(N);
	for (int i = 2; i * i <= N; i++)
	{
		if (N % i == 0)
		{
			num.push_back(i);
            if(i*i != N)
            {
                num.push_back(N / i);
            }
			
		}
	}

	if (num.size() < K)
	{
		cout << 0;
	}
	else
	{
		sort(num.begin(), num.end());
		cout << num[K - 1];
	}






	return 0;
}