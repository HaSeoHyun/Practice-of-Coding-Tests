#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

int dp[100000 + 2][3] = { 0, };
int score[100000 + 2][2 + 2];


int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int sticker_size;
		scanf("%d", &sticker_size);

		//배열 초기화 
		memset(dp, 0, sizeof(dp));
		memset(score, 0, sizeof(score));

		//스티커 만들기 
		for (int i = 1; i <= sticker_size; i++) {
			scanf("%d", &score[i][1]);
		}
		for (int i = 1; i <= sticker_size; i++) {
			scanf("%d", &score[i][2]);
		}
		//dp 테이블 채우기 

		dp[1][0] = 0;
		dp[1][1] = score[1][1];
		dp[1][2] = score[1][2];

		if (sticker_size >= 2) {
			for (int k = 2; k <= sticker_size; k++) {
				dp[k][0] = max(max(dp[k - 1][0], dp[k - 1][1]), dp[k - 1][2]);  //선택 안 할 때
				dp[k][1] = max(dp[k - 1][0], dp[k - 1][2]) + score[k][1];
				dp[k][2] = max(dp[k - 1][1], dp[k - 1][0]) + score[k][2];
			}
		}
		int answer = max(max(dp[sticker_size][0], dp[sticker_size][1]),dp[sticker_size][2]);
		
		printf("%d\n", answer);
	}
}