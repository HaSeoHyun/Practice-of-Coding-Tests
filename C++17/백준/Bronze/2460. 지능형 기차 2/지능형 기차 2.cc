#include <cstdio>

using namespace std;

int main(){
    
    int max = 0;
    int sum = 0;
    for (int i = 0; i<10; i++){
        int on, off;
        scanf("%d %d", &off, &on);

        sum -= off;
        sum += on;
        if (sum > max){ 
            max = sum;
        }
    }

    printf("%d", max);
}