#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    
    //구매 리스트 작성
    map<string , int> wantList;

    for(int i = 0; i < want.size(); i++)
    {
        wantList[want[i]] = number[i];
    }
    
    //전체 날짜 확인 수량 10개라 1최종 10일 이전까지 for
    for(int i =0 ; i <= discount.size() - 10; i++)
    {
        int wantCount = 10;
        map<string , int> List;
        List.insert(wantList.begin() , wantList.end());
        
        //할인날짜 부터 원하는 만큼 살수 있는지 체크
        for(int j= 0; j < 10; j++)
        {
            int addDay = i+j;
            
            if(List.find(discount[addDay]) != List.end())
            {
                if(List[discount[addDay]] > 0)
                {
                    List[discount[addDay]]--;
                    wantCount--;
                }
            }
            
    
            if(wantCount == 0) {
                answer++; break;}
            
        }//for(int j= 0; j < 10; j++)
    }//for(int i =0 ; i < discount.size() - 10; i++)
    
  
    
    return answer;
}