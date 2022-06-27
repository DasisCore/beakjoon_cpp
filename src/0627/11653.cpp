#include <iostream>
using namespace std;

int main() {

    int n, x;
    cin >> n;
    // n은 변하면 안되므로 x를 따로 만들어 둔다.
    x = n;

    // 소수는 2부터이므로,
    for(int i = 2; i < n + 1; i++) {
        // 제곱수 이상부터는 소인수는 존재하지 않는다.
        if(i * i > n) break;

        // 2부터 소인수로 최대한 나눈다. 
        // 소인수로 나누어 나머지가 없다면 반복한다.
        while(x % i == 0) {
            cout << i << endl;
            x /= i;
        }
    }

    // 최대한 나눈 후, 1을 제외한 값을 표시해준다.
    if (x != 1) {
        cout << x << endl;
    }

    return 0;
}