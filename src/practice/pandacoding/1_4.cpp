# include <iostream>
using namespace std;
int main() {
  // char : ���� �������� ǥ���� �� ��.
  int a = 77;
  char b = a;
  cout << b << endl; // ��°��� M�� ����. �ƽ�Ű�ڵ�� �����Ǳ� ����.

  char c[] = {'a', 'b', 'c'};
  // null ���� '\0'
  cout << b << endl; // null���ڸ� �־����� �ʾ����Ƿ� abc�̿��� �ٸ� ���ڵ鵵 ��µ�.
  // "" >> ��������� null ���ڰ� ����. => string
  // ���� char�� ������ ''�� �����ؾ� �� ""�� �ϸ� \0�� �����ϰ� �Ǳ� ����.

  // bool : �⺻������ 0 or 1�θ� ǥ���� 
  // 0 : False, 1 : True

  bool a = 0;
  bool b = 1;
  bool c = 10;

  cout << a << " " << b << " " << c << endl; 
  // ��� : 0 1 1

  return 0;
} // namespace std;
