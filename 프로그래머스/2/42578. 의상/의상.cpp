#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 0;
    unordered_map<string, int> count;
    
    for (auto& c : clothes) {
        count[c[1]]++;
    }

    int add = 1;
    for (auto& pair : count) {
        add *= (pair.second + 1);
    }
    
    answer = add - 1;
    
    return answer;
}