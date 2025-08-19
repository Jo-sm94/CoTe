#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> q;
    
    for (int i = 0; i < progresses.size(); ++i) {
        int condition = 100 - progresses[i];
        int days = (condition <= 0) ? 0 : (condition + speeds[i] - 1) / speeds[i];
        q.push(days);
    }
    
    while(!q.empty())
    {
        int cur = q.front();
        int count = 0;
        
        while (!q.empty() && q.front() <= cur) {
            q.pop();
            ++count;
        }
        
        answer.push_back(count);
    }
    
    return answer;
}