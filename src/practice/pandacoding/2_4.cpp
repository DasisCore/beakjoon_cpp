#include <iostream>
using namespace std;

int main() {

    // c++ ���� ���ڿ��� �ٷ�� ��� �� �ϳ��� string

    /*
    C��Ÿ�Ϸ� string ��ü�� �ʱ�ȭ �� �� �ִ�.
    cin�� ����Ͽ� string ��ü�� Ű���� �Է��� ������ �� �ִ�.
    cout�� ����Ͽ� string ��ü�� ���÷��� �� �� �ִ�.
    �迭 ǥ�⸦ ����Ͽ� string ��ü�� ����Ǿ� �ִ� �������� ���ڵ鿡 ������ �� �ִ�.
    */ // => ���ڿ��� ������. 

    // string���� ������ �ִ� Ư����?
    // �迭�� �ٸ� �迭�� ��°�� ������ �� �ִ�. //  string������ ����!

    char char1[20];
    char char2[20] = "jauar";
    string str1;
    string str2 = "panda"; // "" get���ڰ� ��������� ǥ����.
    // char1 = char2; // Ʋ����
    str1 = str2; // �´�

    cout << str1 << endl;

    // �迭ó�� �ε����� ���� �������� ���ڿ� ������ �� �ִ�.
    cout << str1[0] << endl;

    return 0;
}