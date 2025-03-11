#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    stack<int> int_stack;
    int t;
    string str;
    int x;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> str;
        if (str == "push")
        {
            cin >> x;
            int_stack.push(x);
        }
        else if (str == "pop")
        {
            if (int_stack.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << int_stack.top() << "\n";
                int_stack.pop();
            }
        }
        else if (str == "size")
        {
            cout << int_stack.size() << "\n";
        }
        else if (str == "empty")
        {
            if (int_stack.empty())
            {
                cout << "1\n";
            }
            else
            {
                cout << "0\n";
            }
        }
        else // top
        {
            if (int_stack.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << int_stack.top() << "\n";
            }
        }


    }


    return 0;
}