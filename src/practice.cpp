#include <iostream>
#include <cstring>
using namespace std;


int main() {

    int map[4][4] = {
        6, 6, 5, 4,
        1, 2, 3, 4,
        1, 1, 1, 1,
        5, 4, 3, 2
    };

    int x , y;
    cin >> x >> y;

    int sum = 0;
    sum += map[x - 1][y + 0]; // ����
    sum += map[x + 1][y + 0]; // ������
    sum += map[x + 0][y - 1]; // �Ʒ�
    sum += map[x + 0][y + 1]; // ��

    // �� �ܼ� �ݺ� �ڵ带 for���� �̿��ؼ� �����غ���.

    cout << sum;
    
    
    
    

    return 0;
}