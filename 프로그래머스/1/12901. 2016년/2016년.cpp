#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int day = 0;
    vector<int> month = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<string> week = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};
    
    for(int i = 0; i < a; i++){
        day += month[i];
    }
    day += b;
    
    answer = week[day % 7];
    
    return answer;
}