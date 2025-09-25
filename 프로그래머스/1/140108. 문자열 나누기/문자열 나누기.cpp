#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
    int splitNum = 0;
    int a = 0;
    int b = 0;
    
    for(int i = 0; i < s.size(); ++i)
    {
        if(s[splitNum] == s[i])
        {
            a++;
        }
        else
        {
            b++;
        }
        cout << "a : "<< a << ",  b : " << b << endl;
        if(a == b)
        {
            splitNum = i+1;
            a = 0;
            b = 0;
            answer++;
        }
        
        if(i == s.size()-1 && a != b)
        {   
            answer++;
        }
    }
    
    return answer;
}



/*
int answer = 0;
    int splitNum = 0;
    bool check = true;
    
    while(check){
        int a = 1;
        int b = 0;
        for(int i = splitNum+1; i <= s.length(); i++){
            if(s[splitNum] == s[i]){
                a++;
            }else{
                b++;
            }
            if(a==b){
                answer++;
                splitNum = i+1;
                break;
            }
            if(i == s.length()){
                answer++;
                splitNum = s.length();
            }
        }
        
        if(splitNum+1 > s.length()){
            check = false;
        }
    }
*/