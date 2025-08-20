#include <string>
#include <vector>
#include <iostream>
#include <set>

using namespace std;

vector<int> solution(int n, vector<string> v) {
    int x = 101;
    int y = 101;
    
    int q = 101;
    int w = 101;
    vector<int> answer;
    
    //이어지지 않는 경우를 탐색 
    for (int i = 1; i<v.size(); i++){     
        int last_idx = v[i-1].length()-1;
        if (v[i-1][last_idx] != v[i][0]){  
            //printf("%d번 학생", (i%n)+1);
            x = (i%n)+1;
            y = (i/n)+1;
            break;
        }
    }
    //이미 나왔던 경우를 탐색 - set으로 하나씩 넣고 찾는데 만약 크기가 다르다? break
    set<string> new_set;
    new_set.insert(v[0]);
    for (int i = 1; i<v.size(); i++){
        new_set.insert(v[i]);
        if ((i+1) != new_set.size()){
            q = (i%n)+1;
            w = (i/n)+1;
            break;
        }
    }

    if ((q == 101) && (x == 101) ) {
        answer.push_back(0);
        answer.push_back(0);
    }
    else{
        if (x>q) x = q;           
        if (y>w) y = w;
        answer.push_back(x);
        answer.push_back(y);
    }
    return answer;
    
}