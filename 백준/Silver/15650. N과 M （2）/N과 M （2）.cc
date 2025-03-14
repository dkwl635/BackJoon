#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<int> nums;

void backtracking(int count)
{
    if (nums.size() == m)
    {
        //print
        for (int i : nums)
        {
            cout << i << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = count; i < n + 1; i++)
    {
        nums.push_back(i);
        backtracking(i + 1);
        nums.pop_back();
    }


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    cin >> n >> m;
    backtracking(1);

    return 0;
}
