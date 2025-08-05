#include <cstdio>

using namespace std;

long long arr[1000000];
long long indexedTree[1000000 * 4];
int offset = 1;

long long add(long long start, long end) {  //구간합 구하기 함수 add
	long long result = 0;
	start = start + offset;  //start가 있는 내 인덱스 트리의 실제 위치
	end = end + offset;
	
	while (start <= end) { //start와 end가 만날 때까지, 즉 공통 조상님을 찾을 때까지

		//다만, 왼쪽 끝(start)가 왼쪽자식일 때
		if (start % 2 == 1) {
			result += indexedTree[start];
			start = start + 1; // 이제 옆집으로 가도 됨 
		}

		//다만2, 오른쪽 끝(end)가 오른쪽 자식일 때
		if (end % 2 == 0) {
			result += indexedTree[end];
			end = end - 1;
		}
		start /= 2;   //이제 공통 조상님 찾으러
		end /= 2;    // 가는 중
	}
	return result;
}

void update(long long id, long long value){
	id = id + offset;
	indexedTree[id] = value;

	while (id > 0) {
		id /= 2;
		indexedTree[id] = indexedTree[id * 2] + indexedTree[id * 2 + 1];
	}
	return;
}


int main() {

	int N, M, K;
	scanf("%d %d %d", &N, &M, &K);

	//1. offset을 먼저 구한다. - 인덱스 트리의 틀을 잡는다.
	while (offset < N) {
		offset *= 2;
	}

	//실제 데이터 자체는 트리의 맨 아래층에만 있고, 그 윗층은 합을 그해서 더해주는거다
	//2. 이에 따라 입력받은 값을 인덱스 트리의 가장 아래에 저장한다.
	for (int i = 0; i < N; i++) {
		scanf("%lld", &arr[i]);  //백준 조건에 따라 데이터 입력받기 
	}

	for (int i = 0; i < N; i++) {
		indexedTree[offset + i] = arr[i];  //인덱스 트리 맨 아래부분 제작 완료 
	}

	for (int i = N; i < offset; i++){
		indexedTree[offset + i] = 0;
	}

	for (int i = offset - 1; i > 0; i--) {  //3. 나머지 층 채우기 
		indexedTree[i] = indexedTree[i * 2] + indexedTree[i * 2 + 1];
	}

	//printf("여기부터 3개씩 입력하는 구간:\n");
	long long a, b, c;
	for (int j = 0; j < M + K; j++) {
		scanf(" %lld %lld %lld", &a, &b, &c);

		if (a == 1) {
			update(b-1, c);
		}
		else if (a == 2) {
			long long k = add(b-1, c-1);
			printf("%lld\n", k);
		}
	}
}