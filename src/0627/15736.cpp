#include <iostream>
using namespace std;

int main() {

    int n, ans;
    cin >> n;

    ans = 0;
    for(int i = 1; i < n + 1; i++){
        // �������� n�� �Ѿ�� ����
        if(i * i > n) break;
        ans++;
    }

    cout << ans;

    return 0;
}