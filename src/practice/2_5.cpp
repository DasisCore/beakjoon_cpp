#include <iostream>
#include <cstring>
using namespace std;

int main() {

    // ����ü 
    // C++ Ư���� => ������� �Ը���� ���ϴ� ���������� ���� �� �ִ�.

    // ����ü? => �ٸ� ���������� ���Ǵ� �������� ����.
    // cf) �迭 : "���� ��������"�� ����

    // �౸����
    string name;
    string position;
    int height;
    int weight;
    // ��� �౸���� �ѻ���� ���� �������̴�. => �ϳ��� �������� ǥ���ϸ� ���� ������?
    // => ����ü�� ���.

    // ����ü ����
    struct Mystruct{
        string name; // ������ �Ҹ���� ������Ұ� �ڸ���� ��.
        string position;
        int height;
        int weight;
    }; // Mystruct�� ������ �ڷ������� ����� �� ����

    // Mystruct A;
    // A.name = "Son"; //A. �� ���� ����� ������ �� ����.
    // A.position = "Striker";
    // A.height = 183;
    // A.weight = 77;
    // ���� ���� �����ϰ� �Ʒ� ������ �ʱ�ȭ�� ������.
    
    Mystruct A = {
        "Son",
        "Striker",
        183,
        77
    }; // ������� �ڸ��� �Ҵ�ǰ� ��.

    cout << A.name << endl;
    cout << A.position << endl;
    cout << A.height << endl;
    cout << A.weight << endl;



    struct Mystruct{
        string name;
        string position;
        int height;
        int weight;
    } B; // ���⼭�� B�� ���� B�� ���������μ� ����ü�� ���Ӱ� ��������� ��.

    B.height = 183; // �̷� ��.
    // or

    B = { // ������ ���嵵 ����, ������ ������ ��� ��� 0���� ����ǰ� ��.

    };

    // ����ü ���� �迭�� ������ �����ϴ�.

    Mystruct A[2] = {
        {"A", "A", 1, 1},
        {"B", "B", 2, 2}
    }; // ����ü�� �迭

    cout << A[0].height << endl;// ����ü �迭�� �ش� ���� �����ϴ� ���.


    return 0;
}