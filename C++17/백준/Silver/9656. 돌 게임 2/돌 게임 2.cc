/*
상근이가 먼저 시작, 돌은 1개 또는 3개
N에 따라 1
이기는 사람) 창영
N = 2
이기는 사람) 상
N = 3
이) 창
N = 4
이) 상
N = 5
이) 창
따라서 홀짝 게임이었다~~
*/

#include <cstdio>

using namespace std;
int main(){
    int N;
    scanf("%d", &N);
    if (N%2 == 1) printf("CY");
    else printf("SK");
}