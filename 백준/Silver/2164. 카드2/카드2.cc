#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n;
    queue<int> Q;
    cin >> n;
    for(int i = 0; i < n ; ++i)
    {
        Q.push(i + 1);
    }
    
    while(Q.size() != 1)
    {
        Q.pop();
        Q.push(Q.front());
        Q.pop();
    }
    
    cout << Q.front();
    
    return 0;
}