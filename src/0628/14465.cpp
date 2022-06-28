#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int n, k, b;
    cin >> n >> k >> b;
    cin.ignore();

    vector<int> v(n + 1, 1);
    
    for(int i = 0; i < b; i++) {
        int a;
        cin >> a;
        v[a] = 0;
    }

    // 1부터 세기 시작할 것이므로,
    int s = 1;
    int e = 1;
    int cnt = 0;
    int minCnt = 9999999;

    // k개의 신호등을 먼저 살펴보고 몇개를 
    // 고쳐야 하는지 먼저 파악
    while (e < k) {
        e++;
        if(v[e] == 0){
            cnt++;
        }
    }

    // 이후 연속한 k개의 신호등을 계속 살펴보면서
    // 제일 최소값을 파악한다.
    while (e < n) {
        minCnt = min(minCnt, cnt);
        s++;
        e++;
        if(v[e] == 0) {
            cnt++;
        }
        if(v[s] == 0) {
            cnt--;
        }
    }

    cout << minCnt;

    return 0;
}