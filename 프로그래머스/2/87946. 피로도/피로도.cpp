#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(vector<int> a, vector<int> b)
{
    return a[0] < b[0];
}

int solution(int k, vector<vector<int>> dungeons) {
    int answer = -1;
    
    sort(dungeons.begin(), dungeons.end(), compare);
    
    do{
        int count = 0;
        int k2 = k;
        
        for(int i = 0; i < dungeons.size(); i++)
        {
            if(k2 >= dungeons[i][0])
            {
                k2 -= dungeons[i][1];
                count++;
            }
            else
            {
                break;
            }
            answer = max(answer, count);
        }
    }while(next_permutation(dungeons.begin(), dungeons.end()));
    
    return answer;
}