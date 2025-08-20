#include <string>
#include <vector>
#include <iostream>
#include <cstdio>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    for (int i = 0; i<babbling.size(); i++){
        int checking = 0;  //checking과 N이 같으면 ok 
        int N = babbling[i].length();
        
        int flag = 0;  //중복해서 뭐가 나오는지 방지용 
        
        while (babbling[i].length() > 0){
            if (babbling[i].substr(0,3) == "aya" && flag != 1){
                checking = checking+3;
                babbling[i].erase(0,3);
                flag = 1;
            }
            else if (babbling[i].substr(0,3) == "woo" && flag != 2){
                checking = checking+3;
                babbling[i].erase(0,3);
                flag = 2;
            }
            else if (babbling[i].substr(0,2) == "ye" && flag != 3){
                checking = checking+2;
                babbling[i].erase(0,2);
                flag = 3;
            }
            else if (babbling[i].substr(0,2) == "ma" && flag != 4){
                checking = checking+2;
                babbling[i].erase(0,2);
                flag = 4;
            }
            else break; //이상한게 나오면 그대로 반복문 탈출 
            
        }
        if (checking == N) answer++;
        
    }
    return answer;
}