#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, M; //N: 앱 수,  M: 필요한 용량(최소)
	scanf("%d %d", &N, &M);

	vector<int> memory(N);
	vector<int> cost(N);
	int total_cost = 0;

	for (int i = 0; i < N; i++) {
		scanf("%d", &memory[i]);
	}

	for (int j = 0; j < N; j++) {
		scanf("%d", &cost[j]);
		total_cost += cost[j];
	}

	vector<int> dp(total_cost + 1, 0);

	//조건 입력받기 완료
	for (int i = 0; i < N; i ++ ) {
		int m = memory[i];
		int c = cost[i];

		for (int j = total_cost; j >= c; j--) {
			dp[j] = max(dp[j], dp[j - c] + m);
		}
	}

	for (int i = 0; i <= total_cost; i++) {
		if (dp[i] >= M){
			printf("%d\n", i);
			break;
		}
	}
	//system("pause");
}