#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    
    vector<int> answer(numbers.size(), -1);
    vector<int> Index(numbers.size(), -1);
    int MaxNum = -1;
    int MaxNumIndex = 0;
    
    for(int i = numbers.size() - 1; i >= 0; i--)
    {
        if(numbers[i] >= MaxNum)
        {
            MaxNum = numbers[i];
            answer[i] = -1;
            Index[i] = i;
            MaxNumIndex = i;
        }
        else
        {
            for(int j = i + 1; j <= MaxNumIndex;)
            {
                if(numbers[i] < numbers[j])
                {
                    answer[i] = numbers[j];
                    Index[i] = j;
                    break;
                }
                else
                {
                    j = Index[j];
                }
            }
        }
    }
    
    return answer;
}