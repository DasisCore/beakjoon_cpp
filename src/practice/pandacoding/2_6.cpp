#include <iostream>

using namespace std;

int main() {
    // ����ü�� ����ü
    // ����ü (unions)
    // ���� �ٸ� ���������� �� ���� �� ������ ������ �� ����.

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
    // ������ ������ ������ �����͵��� �ҽǵǰ� ��.
    // => ����: �޸� ���� , �ü���� �ϵ���� ����. => ���� ���� ����

    // ����ü
    // ��ȣ ����� ����� �Ϳ� ���� �� �ٸ� ���.

    enum spectrum {red, orange, yellow, green,
    blue, violet, indigo, ultraviolet };
    /*
    1. spectrum�� ���ο� �������� �̸����� �����.
    2. red, orange, yellow... 0�������� 7���� ���� ���� ����
    ��Ÿ���� ��ȣ ����� �����. //  ���̽��� enumerate�� ����� �� ����.
    */

    spectrum a = orange; // ��������� ������ �� ����. // �����ڵ鳢���� ������� x
    cout << a << endl; // ��� : 1 

    int b;
    b = blue;
    b = blue + 3;
    cout << b << endl;  // ��� : 7
    // �����ڴ� �⺻������ 0~ ���� �����ϴ� �ε���������
    // red = 0 �� ���� ��������� ��°��� ������ ���� ����. // �ʱ�ȭ�� �����θ� �����ϴ�.





    return 0;
}