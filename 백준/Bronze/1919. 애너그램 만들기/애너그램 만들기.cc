#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char arr[2][26] = { 0, };
    
    int result = 0;
    string str1, str2;

    cin >> str1 >> str2;
    for (char c : str1)
        arr[0][c - 'a']++;

    for (char c : str2)
        arr[1][c - 'a']++;

    for (int i = 0; i < 26;i++)
    {
        result += abs(arr[0][i] - arr[1][i]);
    }

    cout << result;

    return 0;
}