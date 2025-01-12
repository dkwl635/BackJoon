#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> mats, vector<vector<string>> park) {
    //큰거 부터 체크하기 위해서
    sort(mats.rbegin(), mats.rend());
    
    int rows = park.size();
    int cols = park[0].size();
    
    int maxMatSize = -1;
    
    for(int i = 0 ; i < rows; i++)
    {
        for(int j = 0 ; j < cols; j++)
        {
            //깔수 있는지
            if(park[i][j] == "-1")
            {
                for(int matSize : mats)
                {
                    //이미 큰 사이즈 가능
                    if(matSize <= maxMatSize) break;
                    //공원을 벗어나는지
                    if (i + matSize > rows || j + matSize > cols) continue;
                    
                    bool can = true;
                     for (int x = 0; x < matSize ; x++) 
                     {
                        for (int y = 0; y < matSize; y++) 
                        {
                            if (park[i + x][j + y] != "-1") 
                            { 
                                can = false;
                                break;
                            }
                        }
                         
                         if(!can)
                         {
                             break;
                         }
                     }// for (int x = 0; x < matSize ; x++) 
                
                    
                     if (can) 
                     {
                        maxMatSize = matSize;
                        break;
                    }                
                }//for(int matSize : mats)
                
                
            }//if(park[i][j] == "-1")
        }//for(int j = 0 ; j < cols; j++)
    }//for(int i = 0 ; i < row; i++)
 
    
    
    return maxMatSize;
}