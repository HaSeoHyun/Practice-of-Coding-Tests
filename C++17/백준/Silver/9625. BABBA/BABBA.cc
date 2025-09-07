/*
1 -> B ->    0 1
2 -> BA ->   1 1
3 -> BAB ->  1 2
4 -> BABBA   2 3
5 -> BABBABAB 3 5
6->  BABBABABBABBA  5 8
A, B 둘 다 피보나치
*/
#include <cstdio>
#include <vector>

using namespace std;

int main(){
    int K;
    scanf("%d", &K);

   vector<int> A;
   vector<int> B;

   int T = 1;
   A.push_back(0); //0번
   A.push_back(0); //1번
   A.push_back(1); //2번
   B.push_back(0); //0번
   B.push_back(1); //1번
   B.push_back(1); //2번

    for (int i = 3; i<=K; i++){
        int a = 0;
        a = A[i-1] + A[i-2];
        A.push_back(a);
    }
    for (int i = 3; i<=K; i++){
        int b = 0;
        b = B[i-1] + B[i-2];
        B.push_back(b);
    }

    printf("%d %d", A[K], B[K]);
}