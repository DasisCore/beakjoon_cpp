# include <iostream>
using namespace std;
int main() {
  // char : 작은 문자형을 표현할 때 씀.
  int a = 77;
  char b = a;
  cout << b << endl; // 출력값이 M이 나옴. 아스키코드로 대응되기 때문.

  char c[] = {'a', 'b', 'c'};
  // null 문자 '\0'
  cout << b << endl; // null문자를 넣어주지 않았으므로 abc이외의 다른 문자들도 출력됨.
  // "" >> 명시적으로 null 문자가 포함. => string
  // 따라서 char형 변수는 ''로 정의해야 함 ""로 하면 \0을 포함하게 되기 때문.

  // bool : 기본적으로 0 or 1로만 표현함 
  // 0 : False, 1 : True

  bool a = 0;
  bool b = 1;
  bool c = 10;

  cout << a << " " << b << " " << c << endl; 
  // 출력 : 0 1 1

  return 0;
} // namespace std;
