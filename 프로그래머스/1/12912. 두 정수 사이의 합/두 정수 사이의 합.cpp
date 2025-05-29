#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long add(int p, int q){
    long long result = 0;
    
    for(int i = p; i <= q; i++){
        result += i;
    }
   
    return result;
}

long long solution(int a, int b) {
    long long answer = 0;
    
    if(a==b){
        answer = a;
    }else if(a<b){
        answer = add(a,b);
    }else{
        answer = add(b,a);
    }
    
    
    cout << answer << endl;
    
    return answer;
}