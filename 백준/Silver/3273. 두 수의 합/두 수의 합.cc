#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int result = 0;

	int n;
	cin >> n;

	int num;
	vector<int> nums;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		nums.push_back(num);
	}

	int x;
	cin >> x;


	sort(nums.begin(), nums.end());


	int left = 0 , right = nums.size() - 1;
	while (left < right)
	{
		int right_num = nums[right];
		if (right_num >= x)
		{
			right--;
			continue;
		}
	
		int left_num = nums[left];
		
	
		if (right_num + left_num == x)
		{
			result++;
			right--;
			left++;
		}
		else if(right_num + left_num > x)
		{
			right--;
		}
		else if (right_num + left_num < x)
		{
			left++;
		}
	}

	cout << result;

	return 0;
}