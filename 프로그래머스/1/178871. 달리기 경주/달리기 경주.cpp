#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    unordered_map<string, int> m;
    
    for(int i = 0; i < players.size(); i++)
    {
        m[players[i]] = i;
    }
    
    for(string sequence : callings)
    {
        int current_idx = m[sequence];
        int front_idx = current_idx - 1;
        
        swap(players[front_idx], players[current_idx]);
        
        m[players[current_idx]] = current_idx;
        m[players[front_idx]] = front_idx;
    }
    
    answer = players;

    
    return answer;
}