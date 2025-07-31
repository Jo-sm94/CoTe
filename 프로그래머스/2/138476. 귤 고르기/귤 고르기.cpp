#include <string>
#include <vector>
#include <map>
#include <queue>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    int count=0;
    map<int, int> m;
    
    for(int i : tangerine)
    {
        m[i]++;
    }
    
    priority_queue<int> pq;
    for(auto i : m)
    {
        pq.push(i.second);
    }

    
    while(!pq.empty() && count < k)
    {
        count += pq.top();
        pq.pop();
        answer++;
    }
    
    return answer;
}
