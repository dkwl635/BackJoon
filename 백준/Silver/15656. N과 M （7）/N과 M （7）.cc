#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int arr[10];
int num[10];

void BackTracking(int count){ 
  if(count == m){ 
    for(int i = 0; i < count; ++i)
      cout << num[arr[i]] << ' '; 
    cout << '\n';
    return;
  }
  for(int i = 0; i < n; ++i){ 
    arr[count] = i; 
    BackTracking(count+1); 
  }
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  for(int i = 0; i < n; ++i)
  {
    cin >> num[i];
  }
  sort(num, num+n);
  BackTracking(0);
}