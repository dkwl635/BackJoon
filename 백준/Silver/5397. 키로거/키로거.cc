#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        string str;
        cin >> str;
        list<char> key;

        list<char>::iterator it;
        it = key.begin();
        for (char c : str)
        {
            if (c == '<')
            {
                if (it != key.begin())
                {
                    it--;
                }
            }
            else if (c == '>')
            {
                if (it != key.end())
                {
                    it++;
                }
            }
            else if (c == '-')
            {
                if (it != key.begin())
                {
                    it--;
                    it = key.erase(it);
                }
            }
            else
            {
                key.insert(it, c);

            }
        }

        for (char c : key)
        {
            cout << c;
        }
        cout << "\n";

    }

    
    return 0;
}