#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    
    queue<int> Q;
    string str;
    int x;
    for(int i=0; i < n; ++i)
    {
        cin >> str;
        if(str == "push")
        {
            cin >> x;
            Q.push(x);
        }
        else if(str =="pop")
        {
            if(Q.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << Q.front() << "\n";
                Q.pop();
            }
        }
        else if(str == "size")
        {
            cout << Q.size() << "\n";
        }
        else if(str == "empty")
        {
            if(Q.empty())
            {
                cout <<  "1\n";
            }
            else
            {
                cout << "0\n";
            }
        }
        else if(str == "front")
        {
            if(Q.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << Q.front() << "\n";    
            }
        }
        else if(str =="back")
        {
            if(Q.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << Q.back() << "\n";    
            }
        }
    }
    
    
    
    return 0;
}