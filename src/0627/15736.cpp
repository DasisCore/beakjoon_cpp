#include <iostream>
using namespace std;

int main() {

    int n, ans;
    cin >> n;

    ans = 0;
    for(int i = 1; i < n + 1; i++){
        // Á¦°ö¼ö°¡ nÀ» ³Ñ¾î°¡¸é ¸ØÃã
        if(i * i > n) break;
        ans++;
    }

    cout << ans;

    return 0;
}