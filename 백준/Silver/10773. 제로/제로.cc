#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int result = 0;
    int k, x;
    stack<int> S;
    cin >> k;

    for (int i = 0; i < k; i++)
    {

        cin >> x;
        if (x == 0)
        {
            if (!S.empty())
                S.pop();
        }
        else
        {
            S.push(x);
        }
    }


    while(!S.empty())
    {
        int i = S.top();
        S.pop();
        result += i;
    }

    cout << result;



    return 0;
}