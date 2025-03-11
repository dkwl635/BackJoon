#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> result;
    queue<int> q;
    int n, k;
    int index = 1;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }
   
    cout << "<";
    while (q.size() != 1)
    {
        
        if (index != k)
        {
            q.push(q.front());
            q.pop();
        }
        else
        {
            cout << q.front() <<", ";
            q.pop();
            index = 0;
        }
        ++index;

    }

    cout << q.front() << ">";


    return 0;
}