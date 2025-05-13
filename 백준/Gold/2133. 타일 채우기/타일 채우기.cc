#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dp[31];
int n, k;
vector<int> arr(31);

void DP()
{
  
    dp[0] = 1;
    

    for (int i = 2; i <= n; i+= 2)
    {
        dp[i] = dp[i - 2] * 3;

        for (int j = 4; i >= j; j += 2)
        {
            dp[i] += dp[i - j] * 2;
        }
        
    }

    cout << dp[n];

}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;



    DP();
    return 0;
}