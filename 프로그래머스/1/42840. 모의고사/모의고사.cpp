#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> p1 = {1,2,3,4,5};
    vector<int> p2 = {2,1,2,3,2,4,2,5};
    vector<int> p3 = {3,3,1,1,2,2,4,4,5,5};
    vector<int> check = {0,0,0};
    
    for(int i = 0; i<answers.size(); i++){
        if(answers[i] == p1[i % p1.size()]) check[0]++;
        if(answers[i] == p2[i % p2.size()]) check[1]++;
        if(answers[i] == p3[i % p3.size()]) check[2]++;
    }
    
    int max = *max_element(check.begin(), check.end());
    
    for(int i = 0; i<check.size(); i++){
    
       if(max == check[i]){
           answer.push_back(i+1);
       } 
    }
    
    sort(answer.begin(), answer.end());
    
    return answer;
}