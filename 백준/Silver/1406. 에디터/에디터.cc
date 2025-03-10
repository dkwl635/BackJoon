#include <iostream>
#include <list>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    int n;

    cin >> str;
    cin >> n;
    list<char> str_list;
    list<char>::iterator cursor;

    for (int i = 0; i < str.size(); i++)
    {
        str_list.push_back(str[i]);
    }
    cursor = str_list.end();

     for (int i = 0; i < n; i++)
     {
         char M;
         cin >> M;
         if (M == 'L')
         {
             if (cursor != str_list.begin())
             {
                 cursor--;
             }
         }
         else if (M == 'D')
         {
             if (cursor != str_list.end())
             {
                 cursor++;
             }
         }
         else if (M == 'B')
         {
             if (cursor != str_list.begin())
             {
                 cursor--;
                 cursor = str_list.erase(cursor);
             }
         }
         else if (M == 'P')
         {
             char t;
             cin >> t;
             str_list.insert(cursor, t);
         }
     }

     for (char c : str_list)
     {
         cout << c;
     }



    return 0;
}