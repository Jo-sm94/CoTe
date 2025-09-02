#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(string word) {
    int answer = 0;
    int maxLen = 5;
    int vowelCount = 5;

    vector<int> weight(maxLen);
    for (int i = 0; i < maxLen; i++) {
        int sum = 0;
        for (int j = 0; j < maxLen - i; j++) {
            sum += pow(vowelCount, j);
        }
        weight[i] = sum;
    }
    
   auto idx = [](char c) {
        if (c=='A') return 0;
        if (c=='E') return 1;
        if (c=='I') return 2;
        if (c=='O') return 3;
        return 4;
    };
    
    for (int i = 0; i < (int)word.size(); ++i) {
        answer += idx(word[i]) * weight[i] + 1;
    }
    
    return answer;
}