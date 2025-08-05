#include <cstdio>
#include <vector>
//#include <Windows.h>

using namespace std;

int main() {
	vector <int> A; 
	int N, M, x;
	int cnt =0;
	scanf("%d %d", &N, &M);
	
	for (int i = 0; i < N; i++) {  //수열 완성
		scanf("%d", &x);
		A.push_back(x);
	}

	//i부터 j까지 합이 M이 되는 경우의 수를 출력해야 한다. 
	for (int i = 0; i < N; i++) {
		int total = 0;
		for (int j = i; j < N; j++) {
			total += A[j];
			if (total == M){
				//printf("%d ~ %d\n", i, j); 확인용 
				cnt++;
				break;
			}
			else if (total > M) {
				break;
			}
		}
	}

	printf("%d", cnt);
	//system("pause");  //콘솔창 닫히기 방지용 
	return 0;
}