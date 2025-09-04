#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;
unordered_set <string> dancing;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    dancing.insert("ChongChong");

    for (int i = 0; i<N; i++){
        string A, B;
        cin >> A >> B;
        //둘 중 하나라도 있다면
        if (dancing.count(A) || dancing.count(B)){
            dancing.insert(A);
            dancing.insert(B);
        }
    }

    int answer = 0;
    answer = dancing.size();
    cout << answer << '\n';
}