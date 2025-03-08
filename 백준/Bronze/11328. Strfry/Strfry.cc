#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    string str1, str2;


    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str1 >> str2;
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());

        if (str1 == str2)
        {
            cout << "Possible";
        }
        else
        {
            cout << "Impossible";
        }

        cout << "\n";


    }




    return 0;
}