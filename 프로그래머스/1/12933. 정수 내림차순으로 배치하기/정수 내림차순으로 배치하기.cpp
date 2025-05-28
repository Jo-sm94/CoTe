#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    string strNum = to_string(n);
    vector<int> arr(strNum.length());
    
    for (int i = 0; i < arr.size(); i++){
        arr[i] = strNum[i]-48;
    }
    
    int maxNum;
    int maxNumPlace;
    
    string a ="";
    
    for(int i = 0; i < arr.size(); i++){
        
        maxNum=0;
        maxNumPlace=0;
            
        for(int j = 0; j < arr.size(); j++){
            if(arr[j] > maxNum){
                maxNum = arr[j];
                maxNumPlace = j;      
            }
        }
       
        arr[maxNumPlace] = -1;
        a += to_string(maxNum);
    }
    
    answer = stold(a);
    
    return answer;
}