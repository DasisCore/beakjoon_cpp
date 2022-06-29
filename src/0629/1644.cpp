#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;
    cin >> n;

    // 에라토스테네스의 체를 사용하기 위해
    vector<int> isPrime(n + 1, 1);
    vector<int> v;

    // 0과 1은 소수가 아니다.
    isPrime[0] = 0;
    isPrime[1] = 0;

    // n값이 50,000 정도가 되면 int의 범위를 넘어서므로
    // long long으로 선언해주어야 한다.
    for(long long i = 2; i < n + 1; i++) {
        // 소수 판별이 이미 끝났다면 continue
        if(not isPrime[i]) continue;

        // 각 수의 배수들은 소수가 아니므로 해당 수들을 제외시킨다.
        for(long long j = i * i; j < n + 1; j += i) {
            isPrime[j] = 0;
        }
    }

    // n까지의 소수판별이 끝났다면 해당 수들을 사용할 수 있도록
    // vector v에 저장해준다.
    for(int i = 0; i < n + 1; i++) {
        if(isPrime[i]) v.push_back(i);
    }

    // vector v를 이용, 연속된 소수의 합을 구해준다.
    // 여기서는 for문을 이용했지만, 투포인터를 이용하면 더 빠르게
    // 구할 수 있다.
    int ans = 0;
    for(int i = 0; i < v.size(); i++) {
        int cnt = 0;
        for(int j = i; j < v.size(); j++) {
            cnt += v[j];
            if(cnt > n) break;
            if(cnt == n) ans++;
        }
    }

    // 정답 출력
    cout << ans;

    return 0;
}