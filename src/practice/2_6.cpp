#include <iostream>

using namespace std;

int main() {
    // 공용체와 열거체
    // 공용체 (unions)
    // 서로 다른 데이터형을 한 번에 한 가지만 보관할 수 있음.

    union MyUnion {
        int intVal; 
        long longVal;
        float floatVal;

    };

    MyUnion test;
    test.intVal = 3;
    cout << test.intVal << endl;
    test.longVal = 33;
    cout << test.intVal << endl;
    cout << test.longVal << endl;
    test.floatVal = 3.3;
    cout << test.intVal << endl;
    cout << test.longVal << endl;
    cout << test.floatVal << endl;
    // 보관할 때마다 이전의 데이터들은 소실되게 됨.
    // => 장점: 메모리 절약 , 운영체제나 하드웨어등에 사용됨. => 자주 보기 힘듬

    // 열거체
    // 기호 상수를 만드는 것에 대한 또 다른 방법.

    enum spectrum {red, orange, yellow, green,
    blue, violet, indigo, ultraviolet };
    /*
    1. spectrum을 새로운 데이터형 이름으로 만든다.
    2. red, orange, yellow... 0에서부터 7까지 정수 값을 각가
    나타내는 기호 상수로 만든다. //  파이썬의 enumerate와 비슷한 것 같음.
    */

    spectrum a = orange; // 산술연산을 적용할 수 없음. // 열거자들끼리의 산술연산 x
    cout << a << endl; // 출력 : 1 

    int b;
    b = blue;
    b = blue + 3;
    cout << b << endl;  // 출력 : 7
    // 열거자는 기본적으로 0~ 부터 시작하는 인덱스이지만
    // red = 0 과 같이 명시적으로 출력값을 설정할 수도 있음. // 초기화는 정수로만 가능하다.





    return 0;
}