#include <stdio.h>
int main(){
    int X; //입력 받을 X
    scanf("%d", &X);
    //그룹 파악하기 - 그룹이 count
    int count = 1;
    int ja, mo; //분자 ja, 분모 mo 

    while (count < X){
        X = X-count;
        count++;
    }

    //그룹(count)이 짝수면 시작점 분자가 1, 분모가 count    /   홀수면 분모가 1, 분자가 count 
    if (count % 2 == 0){
        ja = 1;
        mo = count;
        for (int i = 1; i<X; i++){
            ja++;
            mo--;
        }
    }
    else if (count % 1 == 0){
        ja = count;
        mo = 1;
        for (int i = 1; i<X; i++){
            ja--;
            mo++;
        }
    }
    printf("%d/%d", ja, mo);
    return 0;
}