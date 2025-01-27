#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    
    //두 배열의 길이 비교
    if(arr1.size() != arr2.size())
    {
        answer = arr1.size() >  arr2.size() ? 1 : -1;
    }
    else //배열 원소 합비교
    {
        int a1 = 0;
        int a2 = 0;
        for(int i =0; i < arr1.size(); i++){ a1 += arr1[i];}
        for(int i =0; i < arr2.size(); i++){ a2 += arr2[i];}
        
        if(a1 == a2){answer = 0;}
        else{answer = a1 > a2 ? 1 : -1;}
    }
    
    
    return answer;
}