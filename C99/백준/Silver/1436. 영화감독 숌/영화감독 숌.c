//계속 수를 올라가다가 N만큼 666을 거치면 stop
#include <stdio.h>
#include <string.h>

int main(){

    char temp_str[20];
    int count = 0;
    int N;
    scanf("%d", &N);
    int num = 665;

    while (count < N) {
        num++; // 하나씩 늘려보자

        // 숫자를 문자열로 변환
        sprintf(temp_str, "%d", num);

        // 문자열 안에 "666"이 있는지 확인
        if (strstr(temp_str, "666") != NULL) {
            count++;
        }
    }
    printf("%d\n", num); 
    return 0;
}