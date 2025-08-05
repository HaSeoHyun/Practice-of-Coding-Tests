#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int values[100 + 3];
int weights[100 + 3];

int main(){

	int N, K;
	scanf("%d %d", &N, &K);
	for (int i = 1; i <= N; i++) {
		int W, V;
		scanf("%d %d", &W, &V);
		values[i] = V;
		weights[i] = W;
	}

	vector<vector<int>> dp(N + 1, vector<int>(K + 1, 0));

	for (int i = 1; i <= N; i++) {
		for (int w = 1; w <= K; w++) {
			if (weights[i] <= w) dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - weights[i]] + values[i]);
			else dp[i][w] = dp[i - 1][w];
		}
	}

	printf("%d", dp[N][K]);

	//system("pause");
}