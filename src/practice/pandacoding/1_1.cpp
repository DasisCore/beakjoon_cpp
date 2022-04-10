#include <iostream> //전처리 지시자
/*
c++에서 함수를 사용하고자 한다면?
반드시 그 함수의 원형을 미리 정의하여야 한다.
*/
// " ; " 종결자의 역할
using namespace std;
// 위의 문장이 없으면 std::를 붙여야함. 
// 이를 생략하기 위해서 전처리에서 위의 문장을 삽입함.


int main() {
  // c++코드에는 반드시 main이란 함수가 있어야 한다.
  // main의 이름을 가지고 있는 함수가 있어야 한다.

  cout << "Hello, World!" << endl;
  // cout -> 출력
  // endl; -> 줄바꿈
  // << 꺽쇠는 데이터의 흐름.

  return 0;
}