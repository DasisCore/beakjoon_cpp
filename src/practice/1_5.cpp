#include <iostream>
using namespace std;

int main() {
    // 원의 넓이를 구하는 프로그램.
    // 반지름 * 반지름 * Pi

    int r = 3;
    float s = r * r * 3.14;
    cout << s << endl;
    // 1. 바뀔 필요가 없는 수
    // 2. 바뀌여서는 안되는 수
    // "상수"라는 개념으로 관리를 함.
    // => const
    const float PIE = 3.1415926535;
    // 앞으로 PIE를 통해 활용할 수 있음. + 초기화의 방향으로 다루어야 함.

    float s = r * r * PIE;

    /////////////////////////////////////////////////////////////////
    // 데이터형 변환
    /*
    1. 특정 데이터형의 변수에 다른 데이터형의 값을 대입했을 때
    2. 수식에 데이터형을 혼합하여 사용했을 때
    3. 함수에 매개변수를 전달할 때
    */

    int a = 3.141592;
    cout << a << endl; // 알아서 데이터형을 변환하여 3으로 출력함.

    // 강제적으로 데이터 형 변환.
    // typeName(a) (typeName)a

    char ch = 'M';
    cout << int(ch) << ' ' << (int)ch << endl; // 출력 : 77 77

    // C++
    // static_cast<typeName>() => 이것 또한 C++에서 새롭게 나온 데이터 변환.
    cout << static_cast<int>(ch) << endl;

    
    
    return 0;
} // namespace std;

