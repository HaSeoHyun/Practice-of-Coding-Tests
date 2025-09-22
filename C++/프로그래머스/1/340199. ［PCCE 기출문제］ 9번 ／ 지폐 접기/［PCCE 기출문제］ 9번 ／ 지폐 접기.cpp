#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
    while (true){
        if ((wallet[0] >= bill[0]) and wallet[1] >= bill[1]) return answer;
        if ((wallet[0] >= bill[1]) and wallet[1] >= bill[0]) return answer;
        
        else{
            sort(bill.begin(), bill.end());
            bill[1] /= 2;
            answer++;
        }
    }
    return answer;
}