#include <cstdio>

using namespace std;

int ground[1024+1][1024+1];
int dp[1024 + 3][1024 + 3] = { 0, };

int main() {
	int N, M;
	scanf("%d %d", &N, &M);

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			scanf("%d", &ground[i][j]);
		}
	}
	/*
	printf("\n");
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			printf("%d ", ground[i][j]);
		}
		printf("\n");
	}
	*/

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			dp[i][j] = dp[i][j - 1] + ground[i][j];
		}
	}
	/*
	printf("\n");
	for (int i = 0; i <= N; i++) {
		for (int j = 0; j <= N; j++) {
			printf("%d ", dp[i][j]);
		}
		printf("\n");
	}
	*/

	for (int k = 0; k < M; k++) {
		int x1, y1, x2, y2;
		int answer = 0;
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

		for (int i = x1; i <= x2; i++) {
			answer += (dp[i][y2] - dp[i][y1 - 1]);
		}
		printf("%d\n", answer);
	}
}