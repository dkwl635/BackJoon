#include <iostream>
#include <string>
#include <unordered_map>


using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);

    string book;
    string top_book;
    int top = 0;
    int n;
    unordered_map<string , int> books;
    cin >> n;
    for(int i = 0; i < n ; i++)
    {
        cin >> book;
        books[book]++;
    }
    
    
    for(auto& log : books)
    {
        if(log.second > top)
        {
           top = log.second;
           top_book = log.first;
        }
        
        else if(log.second == top)
        {
           if(log.first < top_book)
           {
                top_book = log.first;
           }
        }
     
    }
    
    cout << top_book;
    
    
    return 0;
}