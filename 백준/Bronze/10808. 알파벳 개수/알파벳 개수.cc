#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int alphabet[26] = {0,};
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        int index = s[i] - 'a';
        alphabet[index]++;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << alphabet[i] << " ";
    }



}