#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);


    int n;
    long long result = 0;
    cin >> n;

    stack<long long> H;
    for (int i = 0; i < n; ++i)
    {
        long long h1;
        cin >> h1;

        while (!H.empty() && H.top() <= h1)
        {
            H.pop();
        }
        result += H.size();
        H.push(h1);
    }


    cout << result;


    return 0;
}
