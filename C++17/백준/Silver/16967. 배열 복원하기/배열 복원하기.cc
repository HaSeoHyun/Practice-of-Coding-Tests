#include <cstdio>
#include <vector>

using namespace std;

int A[300][300];
int B[600][600];

int main(){
    int H, W, X, Y;
    scanf("%d %d %d %d", &H, &W, &X, &Y);

    for (int i = 0; i<H+X; i++){
        for (int j = 0; j<W+Y; j++){
            int x;
            scanf("%d", &x);
            B[i][j] = x;
        }
    }

    for (int i = 0; i<H; i++){
        for (int j = 0; j<W; j++){
            if ((i<X) || (j<Y)) A[i][j] = B[i][j];
            else if ((i >= X) &&(j>=Y) ){
                A[i][j] = B[i][j] - A[i-X][j-Y];
            }
        }
    }

    for (int i =0; i<H; i++){
        for (int j = 0; j<W; j++){
          printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}