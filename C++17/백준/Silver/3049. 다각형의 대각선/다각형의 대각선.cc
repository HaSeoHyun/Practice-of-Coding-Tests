//nC4를 찾는 문제 
#include <cstdio>

using namespace std;

int main(){
    int N;
    scanf("%d", &N);
    int n = N*(N-1)*(N-2)*(N-3);
    int answer = n/24;
    printf("%d", answer);
}