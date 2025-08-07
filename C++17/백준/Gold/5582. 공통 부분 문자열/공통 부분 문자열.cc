#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int dp[4000 + 3][4000 + 3] = { 0, };

int main() {

	string A;
	string B;

	cin >> A;
	cin >> B;
	
	int answer = 0;
	//일단 기본적으로 사이드 채우기
	for (int i = 0; i < A.size(); i++) {
		if (B[0] == A[i]) {
			dp[0][i] = 1;
			answer = 1;
		}
		else dp[0][i] = 0;
	}
	for (int i = 0; i < B.size(); i++) {
		if (A[0] == B[i]) {
			dp[i][0] = 1;
			answer = 1;
		}
		else dp[i][0] = 0;
	}

	//dp의 나머지 부분 채우기 - 아래 j,i가 왜 이 모양이냐고요? 처음에 잘못 입력했거든요 
	//근데 다시 짜기 머리아픔 
	for (int i = 1; i < A.length(); i++) {
		for (int j = 1; j < B.length(); j++) {
			if (A[i] != B[j]) dp[j][i] = 0;
			else {
				dp[j][i] = dp[j-1][i-1] + 1;
				answer = max(answer, dp[j][i]);
			}
		}
	}
	/*
	for (int i = 0; i < A.length(); i++) {
		for (int j = 0; j < B.length(); j++) {
			printf("%d", dp[i][j]);
		}
		printf("\n");
	}
	*/

	printf("%d", answer);

}