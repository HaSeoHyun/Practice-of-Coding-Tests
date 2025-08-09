//아니 이거 홀짝 게임이네
/*
마지막 돌을 가져가려면?
1     2     3       4      5     6      7     8
 0    0     0        0     0     0      0     0
상   창

1개 -> 상근
2개 -> 창영
3개 -> 상근
4개 -> 창영
5개 -> 상근 

6개 ->창
7개 ->상
*/
#include <cstdio>

using namespace std;

int main(){
    int N;
    scanf("%d", &N);
    if (N%2 == 0) printf("CY");
    else printf("SK");
}