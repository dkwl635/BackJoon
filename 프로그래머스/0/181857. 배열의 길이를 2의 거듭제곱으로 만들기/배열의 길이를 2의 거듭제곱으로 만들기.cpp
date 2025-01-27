#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    
    int orginSize = arr.size();
    int target = 1;
    //2의 정수 거듭제곱을 하면서 최소한의 갯수 찾기
    while(orginSize > target)
    {
        target *=2;
    }
    
    //부족한 길이 추가하기
    int addSize = target - orginSize;
    arr.insert(arr.end() , addSize , 0);
    
    return arr;
}