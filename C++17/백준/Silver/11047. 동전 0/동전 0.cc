#include <cstdio>
#include <vector>

using namespace std;

vector <int> v;

int main(){
    int answer = 0;
    int N, K;
    scanf("%d %d", &N, &K);
    int checkpoint = 0;
    for (int i = 0; i<N; i++){
        int x;
        scanf("%d", &x);
        if (x>K){
            checkpoint = i-1;  //checkpoint부터 0까지만 보면 됨 
        }
        v.push_back(x);
    }
    //checkpoint = 6번, v[6] = 1000
    if (checkpoint > 0){ //체크포인트가 있다면 
        for (int j = checkpoint; j>=0; j--){
            int a = K/v[j];
            answer +=a;
            K%=v[j];
        }
    }
    else{  //체크포인트가 없다면 
        for (int j = v.size()-1; j>=0; j--){
            int a = K/v[j];
            answer +=a;
            K%=v[j];
        }
    }
    printf("%d", answer);
    return 0;
}