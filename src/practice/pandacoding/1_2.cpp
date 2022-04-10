#include <iostream>
using namespace std;

// 변수 선언과 규칙
int main() {
  //1. 변수란? 변할 수 있는 수
  //cf) 상수 : 변할 수 없는 수

  /*
  1. 변수의 자료형
  2. 변수의 이름
  3. 변수가 어디에 저장되는가? (메모리 영역)
  */

  int a; // 선언
  a = 7; // 대입

  int b = 3; // 초기화 
  
  cout << a << b << endl;

  a = 5;
  b = 10;
  // 변수는 사용되기 이전에 정의되어야 한다.

  cout << a << b << endl;

  /*
  1. 숫자로 시작할 수 없다.
  2. C++에서 사용하는 키워드는 사용할 수 없다. (예약어)
  3. white space를 사용할 수 없다.
  ex) int 77aaa;
      int return;
      int aa aa; => 안되는 것들.
  */
  
  // 주소 연산자 &를 변수 앞에 붙이고 쉬프트 f7을 누르면 주소값을 볼 수 있다.
  // 보통 컴파일러가 알아서 함.
  return 0;
  
} // namespace std;
