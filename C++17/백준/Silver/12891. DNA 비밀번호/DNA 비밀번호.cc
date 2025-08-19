#include <iostream>
#include <string>
#include <vector>

using namespace std;

int check[4];
int current_state[4]; //현재 상태를 저장
int answers = 0;

void Add(char c){ //다음 슬라이드로 넘어갈 때 쓰는 것
    if (c == 'A'){
        current_state[0]++;
        if (current_state[0] == check[0]) answers++;
    }
    else if (c == 'C'){
        current_state[1]++;
        if (current_state[1] == check[1]) answers++;
    }
    else if (c == 'G'){
        current_state[2]++;
        if (current_state[2] == check[2]) answers++;
    }
    else if (c == 'T'){
        current_state[3]++;
        if (current_state[3] == check[3]) answers++;
    }
}

void Remo(char c){
    if (c == 'A'){
        if (current_state[0] == check[0]) answers--;
        current_state[0]--;
    }
    else if (c == 'C'){
        if (current_state[1] == check[1]) answers--;
        current_state[1]--;
    }
    else if (c == 'G'){
        if (current_state[2] == check[2]) answers--;
        current_state[2]--;
    }
    else if (c == 'T'){
        if (current_state[3] == check[3]) answers--;
        current_state[3]--;
    }    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int S, P;
    cin >> S >> P;

    string Str;
    cin >> Str;
    int result = 0;
    for (int i = 0; i<4; i++){
        cin >> check[i];  //check[0]: A개수, [1]: C개수, [2]: G개수, [3]: T개수
        if (check[i] == 0) answers++; //0이면 그 알파벳 조건 자동 충족 
    }

    //초기
    for (int i = 0; i<P; i++){
        Add(Str[i]);
    }
    if (answers == 4) result++;

    for (int i = P; i<S; i++){
        int j = i-P;
        Add(Str[i]);
        Remo(Str[j]);

        if (answers == 4) result++;
    }

    cout << result << '\n';
}