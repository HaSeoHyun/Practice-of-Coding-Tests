#include <cstdio>
#include <vector>

using namespace std;

vector<int> Primes;

int main(){
	int N;
	scanf("%d", &N);
    int cnt = 0;
    if (N!=1){
        vector <int> v;
        for (int i = 0; i <= N; i++) {
            v.push_back(i);  //전체 세팅
        }
        for (int i = 2; i*i <= N; i++) {
            if (v[i] != 0) {  //이미 삭제된 게 아니라면 
                for (int j = i * i; j <= N; j += i) {
                    v[j] = 0;
                }
            }
        }
        int x = 0;
        for (int i = 2; i <= N; i++) {
            if (v[i] != 0) {
                x = v[i];
                Primes.push_back(x);
            }
        }

        //for (int i = 0; i < Primes.size(); i++) {
        //	printf("%d ", Primes[i]);
        //}

        int sum = 0, left = 0, right = 0;
        while (right <= Primes.size()) {
            
            //1. sum이 N보다 작다
            if (sum < N){
                sum += Primes[right];
                right++;
            }

            else if (sum > N){
                sum -= Primes[left];
                left++;
            }
            else if (sum == N){
                cnt +=1;
                sum += Primes[right];
                right++;
            }
        }
    }
    else cnt = 0;
    printf("%d", cnt);
}