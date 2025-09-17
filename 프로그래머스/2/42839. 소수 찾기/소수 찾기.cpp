#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

bool isPrime(int n)
{
    if(n < 2) return false;
    for(int i = 2; i*i <= n; ++i)
    {
        if(n % i == 0) return false;
    }
    
    return true;
}

int solution(string numbers) {
    int answer = 0;
    set<int> s;
    
    sort(numbers.begin(), numbers.end());
    
    do{
        for(int i = 1; i <= numbers.size(); ++i)
        {
            string strNum = numbers.substr(0, i);
            s.insert(stoi(strNum));    
        }    
    }while (next_permutation(numbers.begin(), numbers.end()));
    
    for(auto it = s.begin(); it != s.end(); ++it)
    {
        if(isPrime(*it)) answer++;
    }
    
    return answer;
}