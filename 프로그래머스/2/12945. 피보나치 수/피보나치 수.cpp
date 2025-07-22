#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> tmp(n+1);
    tmp[0] = 0;
    tmp[1] = 1;

    for (int i = 2; i <= n; ++i) {
        tmp[i] = (tmp[i-1] + tmp[i-2]) % 1234567;
    }
    
    answer = tmp[n];
    
    return answer;
}