#include <iostream>

using namespace std;

long long waves[101];

void dp()
{
    waves[1] = 1;
    waves[2] = 1;
    waves[3] = 1;

    for (int i = 4; i <= 100; ++i)
    {
        waves[i] = waves[i - 2] + waves[i - 3];
    }
}

int main()
{
    int T;
    cin >> T;
    dp();
    for (int i = 0; i < T; ++i)
    {
        int n;
        cin >> n;
        cout << waves[n] << "\n";
    }

    return 0;
}