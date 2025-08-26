#include <cstdio>
#include <vector>

using namespace std;

int main(){
    //일단 에라체로 246912까지 소수 만들기
    //이후 벡터에서 그 구간만 뽑아서 카운트

    //에라체
    int primes[246912+2] = {0,};  //1은 사라진 것 
    //0은 소수가 맞음
    primes[0] = 1;
    primes[1] = 1;

    for (int i = 2; i<=246912; i++){
        if (primes[i] == 1) continue;
        for (int j = i*2; j<=246912; j+=i){
            primes[j] = 1;
        }
    }

    int cmd;
    scanf("%d", &cmd);
    while (cmd != 0){
        int count = 0;
        for (int i = cmd+1; i<=cmd*2; i++){
            if (primes[i] == 0) count++;
        }
        printf("%d\n", count);
        scanf("%d", &cmd);
    }
}