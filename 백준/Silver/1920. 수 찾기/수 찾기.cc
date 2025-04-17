#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int  n, m;
vector<int> nums;

bool BinarySerch(int x)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);

        if (nums[mid] == x)
        {
            return true;
        }

        if (x > nums[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    nums = vector<int>(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());


    cin >> m;
    int x;
    for (int i = 0; i < m; ++i)
    {
        cin >> x;
        
        cout << (BinarySerch(x) ? 1 : 0) << "\n";
    }


}
