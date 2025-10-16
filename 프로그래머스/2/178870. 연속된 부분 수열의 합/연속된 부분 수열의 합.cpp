#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    vector<int> answer(2,0);
    int right = 0;
    int left = 0;
    int sum = 0;
    int start = 0;
    int end = 0;
    int length = 1000000;
    
    auto it = find(sequence.begin(), sequence.end(), k);
    if(it != sequence.end())
    {
        answer[0] = it-sequence.begin();
        answer[1] = it-sequence.begin();
        return answer; 
    }

    while(right <= sequence.size())
    {
        sum += sequence[right];
        
        while(sum > k && left < right)
        {
            sum -= sequence[left];
            left++;
        }
        
        if(sum == k)
        {
            int currentLength = right - left;
            
            if(length > currentLength)
            {
                length = currentLength;
                start = left;
                end = right;
            }
        }
        right++;
    }
    
    answer[0] = start;
    answer[1] = end;
    
    return answer;
}