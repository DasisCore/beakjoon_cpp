#include <iostream>
#include <climits>
using namespace std;

int main() {
  
  // ������ : �Ҽ��ΰ� ���� ��
  // ���� ����, 0, ���� ����
  // short, int, long, long long => ������ ��������
  // �� 4������ ������������ �������°�? => ǥ���� �� �ִ� ���� ũ�Ⱑ �ٸ�
  // �˸��� �ڷ����� ����ؾ� �޸𸮸� ȿ�������� ����� �� ����.

	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int�� " << sizeof n_int << "����Ʈ�̴�." << endl;
	cout << "�� ����Ʈ�� �ִ밪�� " << n_int << " �̴�." << endl;
    
	cout << "short�� " << sizeof n_short << "����Ʈ�̴�." << endl;
	cout << "�� ����Ʈ�� �ִ밪�� " << n_short << " �̴�." << endl;
    
	cout << "long�� " << sizeof n_long << "����Ʈ�̴�." << endl;
	cout << "�� ����Ʈ�� �ִ밪�� " << n_long << " �̴�." << endl;
    
	cout << "long long�� " << sizeof n_llong << "����Ʈ�̴�." << endl;
	cout << "�� ����Ʈ�� �ִ밪�� " << n_llong << " �̴�." << endl;

  unsigned int a;
  unsigned short b;
  unsigned long c;
  unsigned long long d;
  // unsigned? ���� ������ �������� �����Ƿ� ���� ������ ���� �ø�.


  //////////////////////////////////////////////////////////////
  // C++ ���� �����ϴ� �Ǽ���.
  // �Ǽ��� : �Ҽ��ΰ� �ִ� ��

  // float a = 3.14;
  // int b = 3.14;

  // cout << a << ' ' << b << endl; 

} // namespace std;


