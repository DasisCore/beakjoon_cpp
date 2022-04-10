// 참조자 개념.

#include <iostream>
using namespace std;


// change_val 함수의 인자 p에 number의 주소값을 전달하여.
// *p를 통해 number를 참조하여 number의 값을 3으로 바꾸었다.
// 이러한 방식은 C에서 쓰이는 포인터를 사용한 것.

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


