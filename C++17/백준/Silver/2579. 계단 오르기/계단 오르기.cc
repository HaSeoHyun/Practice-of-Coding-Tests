#include <cstdio>
#include <algorithm>

using namespace std;

int dp[300 + 2];
int score[300 + 2];

int main() {
	int N;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		scanf("%d", &score[i]);
	}
	dp[0] = 0;
	dp[1] = score[1];

	if (N >= 2) dp[2] = score[1] + score[2];

	if (N >= 3) {
		for (int i = 3; i <= N; i++) {
			dp[i] = max(dp[i - 2] + score[i], dp[i - 3] + score[i - 1] + score[i]);
		}
	}
	printf("%d", dp[N]);	
}