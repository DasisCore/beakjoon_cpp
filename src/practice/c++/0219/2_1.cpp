// ������ ����.

#include <iostream>
using namespace std;


// change_val �Լ��� ���� p�� number�� �ּҰ��� �����Ͽ�.
// *p�� ���� number�� �����Ͽ� number�� ���� 3���� �ٲپ���.
// �̷��� ����� C���� ���̴� �����͸� ����� ��.

int change_val (int *p) {
    *p = 3;
    return 0;
}

int main() {
    int number = 5;

    cout << number << endl;
    change_val(&number);
    cout << number << endl;

    return 0;    
} // namespace std;


