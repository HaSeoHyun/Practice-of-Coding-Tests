#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    vector<int> v(n+1);
    for (int i = 0; i<=n; i++){
        v[i] = i;
    }
    v[1] = 0; //1 제거 
    int i = 2;
    while (i <= n){
        if (v[i] != 0){
            int k = 2;
            while(v[i] * k <= n){
                v[v[i] * k] = 0;
                k++;
            }
        }
        i++;
    }
    
    int answer = 0;
    for (int x:v){
        if (x != 0) answer++;
    }
    return answer;
}