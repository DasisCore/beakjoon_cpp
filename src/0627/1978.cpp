#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    // �Ҽ��� ������ ���� ���� ����
    int ans = 0;

    for(int i = 0; i < n; i++) {
        // ����ؼ� �ԷµǴ� ������
        int num;
        cin >> num;
        
        // ����� ���� ����
        int cnt = 0;
        // 1�� �Ҽ��� �ƴϹǷ� ���� �з���.
        if (num != 1){
            // 2���� root num������ ���� ��� ����غ���.
            for(int j = 2; j < num; j++){
                if(j * j > num) break;

                // �������� ���� ��� = ����� ���
                if(num % j == 0) {
                    cnt++;
                }
            }

            // ����� ������ �Ҽ��̴�.
            if(cnt == 0) {
                ans++;
            }
        }
    }
    
    // �Ҽ��� ���� ���
    cout << ans;

    return 0;
}