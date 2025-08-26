#include <cstdio>
#include <vector>

using namespace std;

vector<int> board;
vector<int> dices;
int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    for (int i = 0; i<N; i++){
        int x =0;
        scanf("%d", &x);
        board.push_back(x);
    }

    for (int i = 0; i<M; i++){
        int y = 0;
        scanf("%d", &y);
        dices.push_back(y);
    }

    int answer = 0;
    int now = 0;
    int cnt = 0;
    while (now < N-1){
        int k = dices[cnt];
        now += k;
        int t = board[now];
        now += t;
        cnt++;
    }
    printf("%d\n", cnt);
}