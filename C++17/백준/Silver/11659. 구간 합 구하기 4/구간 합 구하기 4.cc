#include <cstdio>

using namespace std;

int data[100000];
int indexTree[100000 * 4] = { 0, };

int add(int start, int end, int offset) {  //실제로 값을 넣을 때는 
	start = start + offset;
	end = end + offset;
	int sum = 0;
	while (start <= end) {
		if (start % 2 == 1) {  //시작이 오른쪽 자식이면
			sum += indexTree[start];
			start++;
		}
		if (end % 2 == 0) {
			sum += indexTree[end];
			end--;
		}
		start /= 2;
		end /= 2;
	}
    return sum;
}


int main() {
	int offset = 1;
	int N, M;

	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {  //데이터 마련 
		scanf(" %d", &data[i]);
	}

	while (offset < N) {
		offset *= 2;
	}

	for (int i = 0; i < N; i++) {  //맨 아래줄에 데이터 배치 
		indexTree[offset + i] = data[i];
	}

	// 윗줄 데이터 채우기 - 인덱스 트리 완성 
	for (int i = offset - 1; i > 0; i--) {
		indexTree[i] = indexTree[i * 2] + indexTree[i * 2 + 1];
	}

    //
    int a, b;
    for (int i = 0; i < M; i++){
        scanf("%d %d", &a, &b);
        int x = add(a-1, b-1, offset);
        printf("%d\n", x);
    }
}