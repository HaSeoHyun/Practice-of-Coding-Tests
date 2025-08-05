#include <cstdio>

using namespace std;

long long dp[31][31];

int main() {
	int T, N, M;
	scanf("%d", &T);

	dp[0][0] = dp[1][0] = dp[1][1] = 1;

	//dp[30][30]까지 만들고 그걸 불러오기만 하면 된다.
	for (int i = 2; i < 31; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0) dp[i][j] = 1;
			if (i == j) dp[i][j] = 1;
			else {
				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
			}
		}
	}
	
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &N, &M);
		printf("%lld\n", dp[M][N]);
	}
}