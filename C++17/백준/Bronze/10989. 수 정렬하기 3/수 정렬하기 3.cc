#include <cstdio>

using namespace std;
int count[10000+3] = {0,};

int main(){
    int N;
    scanf("%d", &N);
    for (int i = 0; i<N; i++){
        int x;
        scanf("%d", &x);
        count[x]++; 
    }
    for (int i = 0; i<=10000; i++){
        if (count[i] != 0){
            for (int j = 0; j<count[i]; j++){
                printf("%d\n", i);
            }
        }
    }
}