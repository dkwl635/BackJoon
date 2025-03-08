#include <iostream>

using namespace std;


int nums[101];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x, v, result;
    result = 0;
    cin >> n;
    

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cin >> v;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == v)
        {
            result++;
        }
    }

    cout << result;
    return 0;
}