#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;
unordered_set<string> unset;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int answer = 0;
    int N,M;
    cin >> N >> M;
    
    for (int i = 0; i<N; i++){
        string s;
        cin >> s;
        unset.insert(s);
    }

    for (int i = 0; i<M; i++){
        string r;
        cin >> r;

        if (unset.count(r))answer++;
    }

    cout << answer << '\n';
}