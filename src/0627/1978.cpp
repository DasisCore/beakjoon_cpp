#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    // 소수의 개수를 세기 위한 변수
    int ans = 0;

    for(int i = 0; i < n; i++) {
        // 계속해서 입력되는 변수들
        int num;
        cin >> num;
        
        // 약수의 개수 세기
        int cnt = 0;
        // 1은 소수가 아니므로 따로 분류함.
        if (num != 1){
            // 2부터 root num까지의 수를 모두 계산해본다.
            for(int j = 2; j < num; j++){
                if(j * j > num) break;

                // 나머지가 없는 경우 = 약수인 경우
                if(num % j == 0) {
                    cnt++;
                }
            }

            // 약수가 없으면 소수이다.
            if(cnt == 0) {
                ans++;
            }
        }
    }
    
    // 소수의 개수 출력
    cout << ans;

    return 0;
}