#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);

	int dp[500 + 3] = { 0, };  //dp의 값을 가져온다
	int tri[500 + 3][500+3] = { 0, };

	// 삼각형 입력받기
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			scanf("%d", &tri[i][j]);
		}
	}

	for (int i = 0; i < n; i++) {
		dp[i] = tri[n - 1][i];   //일단 맨 아래의 수로 채워넣기 
	}

	for (int i = n - 2; i >= 0; i--) {
		for (int j = 0; j <=i; j++) {
			dp[j] = max(dp[j], dp[j + 1]) + tri[i][j];  //dp의 값 갱신 
		}
	}

	printf("%d\n", dp[0]);

}
