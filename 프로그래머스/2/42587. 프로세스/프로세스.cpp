#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<pair<int,int>> que;
    priority_queue<int> pq;
    
    for(int i=0; i<priorities.size(); i++)
    {
        que.push({i, priorities[i]});
        pq.push(priorities[i]);
    }
    
    int count = 0;
    
    while (!que.empty()) {
        auto cur = que.front(); que.pop();

        if (cur.second == pq.top()) {
            ++count;
            pq.pop();
            
            if (cur.first == location) return count;
            
        } else {
            que.push(cur);
        }
    }

    return answer;
}