#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int yx;
    int yy;
    
    for(int i = 1; i<=yellow; i++)
    {
        if(yellow/i < i) break;
        if(yellow % i != 0) continue;
        if(((yellow/i) * 2) + (i * 2) + 4 != brown) continue;

        yx = yellow/i;
        yy = i;
        
        break;
    }
    
    answer.push_back(yx+2);
    answer.push_back(yy+2);
    
    return answer;
}