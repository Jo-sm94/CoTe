#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    map<char, vector<int>> m;
    int WSize = park[0].length()-1;
    int HSize = park.size()-1;
    int y=0;
    int x=0; 
    m['N'] = {-1, 0};
    m['S'] = {1, 0};
    m['E'] = {0, 1};
    m['W'] = {0, -1};
    
    for(int i = 0; i < park.size(); i++)
    {
        int a = park[i].find("S");
        if (a != string::npos) {
            answer = {i, a};
            break;
        }
    }
    
    for(int i = 0; i < routes.size(); i++)
    {
        bool result = true;
        char direction = routes[i][0];
        int distance = routes[i][2] - '0';
        int dy = answer[0] + (m[direction][0]*distance);
        int dx = answer[1] + (m[direction][1]*distance);
        
        if(dy < 0 || HSize < dy) continue;
        if(dx < 0 || WSize < dx) continue;
        
        for(int j = 1; j<=distance; j++)
        {
            y = answer[0] + (m[direction][0] * j);
            x = answer[1] + (m[direction][1] * j);
            
            if(park[y][x] == 'X')
            {
                result = false;
                break;
            }
        }
        
        if(result) answer = {y,x};
    }
    
    return answer;
}