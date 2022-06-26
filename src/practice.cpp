#include <iostream>
using namespace std;

int main() {

    int n, p;
    cin >> n >> p;

    int cnt = 0;
    int x = p;

    while (x <= n) {
        cnt += n / x;
        x *= p; 
    }
    cout << cnt;
}