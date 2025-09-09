#include <string>
#include <vector>

using namespace std;

long long abc(long long& num)
{
    long long result;
    
    if(num % 2 ==0)
    {
        result = num+1;
    }
    else
    {
        long long ll = ((num+1) & ~num) >> 1;
        result = num + ll;
    }
    
    return result;
}

vector<long long> solution(vector<long long> numbers) {
    vector<long long> answer;
    
    for(long long num : numbers)
    {
        answer.push_back(abc(num));
    }
    
    return answer;
}