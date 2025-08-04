#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    int size = citations.size();
    int count = size;
    
    sort(citations.begin(), citations.end(), greater<int>());
     
    while(true)
    {
        int check = 0;
        for(int i = 1; i<size; i++)
        {
            check = count_if(citations.begin(), citations.end(), [count](int x){
                return x >= count;
            });
        }
        
        if(count <= check)
        {
            break;
        }
        count--;
    }
    
    answer = count;
      
    return answer;
}