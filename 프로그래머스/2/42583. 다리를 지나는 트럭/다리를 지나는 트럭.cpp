#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int curWeight = 0;
    queue<int> wait;
    queue<pair<int,int>> progress;
    for(int i : truck_weights)
    {
        wait.push(i);
    }

    while(!wait.empty() || !progress.empty())
    {
        ++answer;
        
        if(!progress.empty() && progress.front().second == answer)
        {
            curWeight -= progress.front().first;
            progress.pop();
        }
        
        if(!wait.empty())
        {
            int next = wait.front();
            bool canWeight = (curWeight + next) <= weight;
            bool canCount  = progress.size() < bridge_length;

            if (canWeight && canCount) {
                curWeight += next;
                progress.emplace(next, answer + bridge_length);
                wait.pop();
            }
        }
    }
    
    return answer;
}