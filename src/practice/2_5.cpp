#include <iostream>
#include <cstring>
using namespace std;

int main() {

    // 구조체 
    // C++ 특장점 => 사용자의 입맛대로 원하는 데이터형을 만들 수 있다.

    // 구조체? => 다른 데이터형이 허용되는 데이터의 집합.
    // cf) 배열 : "같은 데이터형"의 집합

    // 축구선수
    string name;
    string position;
    int height;
    int weight;
    // 모두 축구선수 한사람에 대한 데이터이다. => 하나의 집합으로 표현하면 쉽지 않을까?
    // => 구조체가 사용.

    // 구조체 선언
    struct Mystruct{
        string name; // 멤버라고 불리우는 구성요소가 자리잡게 됨.
        string position;
        int height;
        int weight;
    }; // Mystruct를 변수의 자료형으로 사용할 수 있음

    // Mystruct A;
    // A.name = "Son"; //A. 을 통해 멤버를 선언할 수 있음.
    // A.position = "Striker";
    // A.height = 183;
    // A.weight = 77;
    // 위의 선언도 가능하고 아래 형태의 초기화도 가능함.
    
    Mystruct A = {
        "Son",
        "Striker",
        183,
        77
    }; // 순서대로 자리에 할당되게 됨.

    cout << A.name << endl;
    cout << A.position << endl;
    cout << A.height << endl;
    cout << A.weight << endl;



    struct Mystruct{
        string name;
        string position;
        int height;
        int weight;
    } B; // 여기서의 B를 통해 B의 변수명으로서 구조체가 새롭게 만들어지게 됨.

    B.height = 183; // 이런 식.
    // or

    B = { // 빈값으로 저장도 가능, 빈값으로 저장할 경우 모두 0으로 저장되게 됨.

    };

    // 구조체 역시 배열로 선언이 가능하다.

    Mystruct A[2] = {
        {"A", "A", 1, 1},
        {"B", "B", 2, 2}
    }; // 구조체의 배열

    cout << A[0].height << endl;// 구조체 배열의 해당 값에 접근하는 방법.


    return 0;
}