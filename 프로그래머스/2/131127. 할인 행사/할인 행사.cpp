#include <string>
#include <vector>
#include <map>

using namespace std;

bool check(map<string, int> m)
{
    for(auto element : m)
    {
        if(element.second != 0)
        {
            return false;
        }
    }
    return true;
}


int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    map<string, int> m;
    bool bCheck = true;
    int count = 0;

    while(count <= discount.size() - 10)
    {   
        m.clear();
        for(int i = 0; i < want.size(); i++)
        {
            m[want[i]] = number[i];
        }

        for(int i = count; i < count + 10; i++)
        {
            if (m.find(discount[i]) != m.end())
            {
                m[discount[i]]--;
            }
        }

        bCheck = check(m);

        if(bCheck) answer++;
        
        count++;
    }
    
    return answer;
}