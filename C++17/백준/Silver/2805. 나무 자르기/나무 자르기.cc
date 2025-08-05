/*
처음에 int형으로 했다가 오류난 케이스:
5 2000000000
900000000 900000000 900000000 900000000 900000000
*/
#include <cstdio>
#include <vector>
#include <algorithm>
//#include <Windows.h>

using namespace std;

long long BinSearch(vector<long long> vect, long long target) {
	long long answer = 0;
	long long f, l, mid;  //f: first, l: last라는 뜻 
	f = 0, l = vect.back(); //초기 세팅 
	mid = (f + l) / 2;

	long long sum;

	while ((f<=l) && (f < mid)) { //(f < mid)가 있는 이유: 완전히 target을 찾을 수 없을 가능성이 있기 때문에 
		sum = 0;
		for (long long i = 0; i < vect.size(); i++) {
			if (vect[i] >= mid) {
				sum += vect[i] - mid; //나무 슬라이스 - 벡터에 있는 각각마다 mid만큼 빼준다 
			}
		}
		if (sum > target) { //목표보다 넘친다 
			f = mid;
			mid = (f + l) / 2;
			//printf("현재값: %lld\n", sum);  //체크용 
		}
		else if (sum < target) {
			l = mid;
			mid = (f + l) / 2;
			//printf("현재값: %lld\n", sum);
		}
		else if (sum == target) {//딱 맞게 베면 탈출 
			//answer = mid;
			break;
		}
	}
	answer = mid;
	return answer;
}

int main(){
	long long N, M, x;
	vector <long long> v;
	scanf("%lld %lld", &N, &M);
	
	for (long long i = 0; i < N; i++) {
		scanf("%lld", &x);
		v.push_back(x);
	}

	sort(v.begin(), v.end());  //이분탐색을 위해 정렬 
	printf("%lld", BinSearch(v, M));

	//system("pause");
}