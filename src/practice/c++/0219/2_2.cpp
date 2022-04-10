#include <iostream>
using namespace std;

int main() {
    int a = 3;
    int& another_a = a;

    another_a = 5;

    cout << "a: " << a << endl;
    cout << "another_a: " << another_a << endl;

    return 0;
}

// 여기서 another_a는 a의 또다른 이름이라고 생각하면 됨. // 참조자 (레퍼런스)
// another_a에 대해 수행하는 작업은 a에게 작업을 수행하는 것과 같다.

// 참조자(레퍼런스)의 경우에는 정의 시 반드시 누구의 별명인지 지정해주어야 한다. // 포인터는 상관 무
// 참조자(&)의 경우에는 변수를 지정할 수 없지만.!
// 포인터(*)의 경우에는 재 지정을 통해 기존 변수를 버리고 새롭게 값을 지정할 수 있다.




