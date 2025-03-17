#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, x;
    string str;
    deque<int> D;
    
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        cin >> str;
        if(str == "push_front")
        {
            cin >> x;
            D.push_front(x);
        }
        else if(str == "push_back")
        {
            cin >> x;
            D.push_back(x);
        }
        else if(str == "pop_front")
        {
            if(D.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << D.front() << "\n";
                D.pop_front();
            }
        }
        else if(str == "pop_back")
        {
            if(D.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << D.back() << "\n";
                D.pop_back();
            }
        }
        else if(str == "size")
        {
            cout << D.size() << "\n";
        }
        else if(str == "empty")
        {
            cout << (D.empty() ? "1\n" : "0\n");
        }      
        else if(str == "front")
        {
            if(D.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << D.front() << "\n";
            }
        }
        else if(str == "back")
        {
            if(D.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << D.back() << "\n";
            }            
        }        
    }
    
    
    return 0;
}