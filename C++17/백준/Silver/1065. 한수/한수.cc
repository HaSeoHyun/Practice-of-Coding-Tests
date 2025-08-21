#include <cstdio>

using namespace std;

int main(){
    int N;
    scanf("%d", &N);
    int answer = 0;

    if (N < 100) answer = N;

    else {  //N이 세자리수면
        answer = 99;
        for (int k = 100; k<=N; k++){
            int a = k/100;
            int b = (k%100)/10;
            int c = k%10;
            if ((a-b) == (b-c) ) answer++;
        }
    }

    printf("%d", answer);
}