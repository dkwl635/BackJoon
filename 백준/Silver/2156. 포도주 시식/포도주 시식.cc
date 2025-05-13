#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dp[10001];
int n, k;
vector<int> arr(10001);

void DP()
{
  
    dp[0] = 0;
    dp[1] = arr[1];
    dp[2] = arr[1] + arr[2];

    for (int i = 3; i <= n; ++i)
    {
        dp[i] = max(dp[i - 3] + arr[i - 1] + arr[i],   dp[i - 2] + arr[i]);
    
        dp[i] = max(dp[i], dp[i - 1]);
        
    }

    cout << dp[n];

}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    
    for (int i = 1; i <= n; ++i)
    {
        cin >> k;
        arr[i] = k;

    }

    DP();
    return 0;
}