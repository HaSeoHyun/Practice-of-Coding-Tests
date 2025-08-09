#include <cstdio>
#include <vector>
using namespace std;

int main(){
    int T;
    scanf("%d", &T);
    while (T--){
        int N;
        scanf("%d", &N);
        vector<int> prices(N);
        for (int i = 0; i < N; i++) scanf("%d", &prices[i]);

        long long profit = 0;
        int max_price = 0;
        for (int i = N - 1; i >= 0; i--){
            if (prices[i] > max_price) max_price = prices[i];
            else profit += max_price - prices[i];
        }
        printf("%lld\n", profit);
    }
}