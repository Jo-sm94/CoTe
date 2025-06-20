#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    map<int, int> mp = {{6,1},{5,2},{4,3},{3,4},{2,5},{1,6},{0,6}};
    int zeroCnt = 0;
    int count = 0;
    
    for(int i : lottos){
        if(i == 0) {
            zeroCnt++;   
        }
        else{
            for(int j : win_nums){
                if(i == j){
                    count++;
                }
            }    
        }    
    }
    
    answer.push_back(mp[count+zeroCnt]);
    answer.push_back(mp[count]);
    
    return answer;
}