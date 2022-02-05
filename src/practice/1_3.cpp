#include <iostream>
#include <climits>
using namespace std;

int main() {
  
  // 정수형 : 소수부가 없는 수
  // 음의 정수, 0, 양의 정수
  // short, int, long, long long => 정수형 데이터형
  // 왜 4가지의 데이터형으로 나눠지는가? => 표현할 수 있는 수의 크기가 다름
  // 알맞은 자료형을 사용해야 메모리를 효율적으로 사용할 수 있음.

	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int는 " << sizeof n_int << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_int << " 이다." << endl;
    
	cout << "short은 " << sizeof n_short << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_short << " 이다." << endl;
    
	cout << "long은 " << sizeof n_long << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_long << " 이다." << endl;
    
	cout << "long long은 " << sizeof n_llong << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_llong << " 이다." << endl;

  unsigned int a;
  unsigned short b;
  unsigned long c;
  unsigned long long d;
  // unsigned? 음의 정수를 포함하지 않으므로 양의 정수의 폭을 늘림.


  //////////////////////////////////////////////////////////////
  // C++ 에서 제공하는 실수형.
  // 실수형 : 소수부가 있는 수

  // float a = 3.14;
  // int b = 3.14;

  // cout << a << ' ' << b << endl; 

} // namespace std;


