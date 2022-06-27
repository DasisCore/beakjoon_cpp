#include <iostream>
using namespace std;

int main() {

    int n, x;
    cin >> n;
    // n�� ���ϸ� �ȵǹǷ� x�� ���� ����� �д�.
    x = n;

    // �Ҽ��� 2�����̹Ƿ�,
    for(int i = 2; i < n + 1; i++) {
        // ������ �̻���ʹ� ���μ��� �������� �ʴ´�.
        if(i * i > n) break;

        // 2���� ���μ��� �ִ��� ������. 
        // ���μ��� ������ �������� ���ٸ� �ݺ��Ѵ�.
        while(x % i == 0) {
            cout << i << endl;
            x /= i;
        }
    }

    // �ִ��� ���� ��, 1�� ������ ���� ǥ�����ش�.
    if (x != 1) {
        cout << x << endl;
    }

    return 0;
}