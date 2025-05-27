#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    
    string a = to_string(n);

    for(int i = a.length()-1; i >= 0; i--){
        
        answer.push_back(stoi(a.substr(i,1)));
    }
    
    return answer;
}