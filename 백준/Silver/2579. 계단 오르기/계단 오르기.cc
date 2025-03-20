#include <iostream>
#include <vector>

using namespace std;

int dp[301];
int n;
vector<int> stair;

void StartDP()
{
    dp[1] = stair[1];
    dp[2] = max(stair[1], stair[1] + stair[2]);
    dp[3] = max(stair[3] + stair[2] , stair[3] + dp[1]);

    for (int i = 4; i <= n; i++)
    {
        dp[i] = max(stair[i] + dp[i - 2], stair[i] + dp[i - 3] + stair[i - 1]);
    }

    cout << dp[n];
}

int main()
{
    cin >> n;
    stair = vector<int>(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> stair[i];
    }

    StartDP();
    return 0;
}
