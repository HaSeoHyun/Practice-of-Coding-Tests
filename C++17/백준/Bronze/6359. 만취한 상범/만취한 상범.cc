#include <cstdio>

using namespace std;

int main(){
    int T;
    scanf("%d", &T);
    for (int t = 0; t<T; t++){
        int rooms[100+3] = {0,};  //방 문이 0: 닫힘
        int n;
        scanf("%d", &n);
        
        //1의 배수 열, 2배, 4배,...n배까지 하기
        for (int i = 1; i<=n; i++){
            for (int j = 1; i*j<=n; j++){
                if (rooms[i*j] == 1) rooms[i*j] = 0;
                else if (rooms[i*j] == 0) rooms[i*j] = 1;
            }
        }

        int answer = 0;
        for (int k = 1; k<=n; k++){
            if (rooms[k] == 1) answer++;
        }
        printf("%d\n", answer);
    }
}