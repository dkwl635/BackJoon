#include <string>
#include <vector>
#include <map>

#include <iostream>

using namespace std;

int solution(vector<string> friends, vector<string> gifts) {
    int answer = 0;
    
    //선물 지수 체크
     map<string , int> giftMap;
    //누가 누구한테 몇개의 선물을 주었는지
     map<string ,  map<string, int>> giveGiftMap;
    
    //선물 지수 및 선물 갯수 저장
    for(string str : gifts)
    {
       int index =  str.find(' ');
         
        //문자 자르기
        string A = str.substr(0, index);
        string B = str.substr(index + 1, str.size() - index);
        
        giftMap[A]++;
        giftMap[B]--;
        
        giveGiftMap[A][B]++;
    }
 
    //선물이 같으면 받는게 B라 B를 기준으로 함
    for(string B : friends)
    {
        int count = 0;
       
         
        for(string A : friends)
        {
            //중복 체크
            if(B == A){continue;}
            //선물 지수 같으면 다음
            if(giftMap[B] == giftMap[A] ){continue;}
            
            //선물 기록이 있으면
           if(giveGiftMap[B][A] > 0  )
           {
               //누가 더많이 주었는지
               if(giveGiftMap[B][A] > giveGiftMap[A][B])
               {
                   count++;
               }
           }
         //선물 기록 없거나 기록이 같으면
         if( (giveGiftMap[B][A] == 0 && giveGiftMap[A][B] == 0) ||
             giveGiftMap[B][A] == giveGiftMap[A][B])
            {
    
                if(giftMap[B] > giftMap[A])
                {
                     count++;
                 
                }
            }
                
        }//  for(string A : friends)
        
        //기록 갱신
        if(answer < count)
        {
           
            answer = count;
        }
    }
   
  
    return answer;
}