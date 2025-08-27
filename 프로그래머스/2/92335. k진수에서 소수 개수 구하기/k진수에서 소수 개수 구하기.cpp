#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<string> conversion(const int& n, const int& k)
{
    int num = n;
    vector<string> convert;
    string s = "";
    
    while(num > 0)
    {
        if(num%k == 0)
        {
            if(!s.empty())
            {
                convert.push_back(s);
                s = ""; 
            }
        }
        else
        {
            s = to_string(num%k) + s;
        }
        num /= k;
        
        if(num <= 0 && !s.empty())
        {
            convert.push_back(s);
        }
    }

    return convert;
}

bool isPrime(string s)
{
    long long num = stoll(s);
    if(num < 2) return false;
    for(long long i = 2; i*i <= num; i++)
    {
        if(num % i == 0) return false;
    }
    
    return true;
}

int solution(int n, int k) {
    int answer = 0;
    vector<string> convert = conversion(n, k);
    
    for(string s : convert)
    {
       if(isPrime(s)) answer++;
    }
    
    return answer;
}