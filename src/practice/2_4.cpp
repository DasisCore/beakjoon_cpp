#include <iostream>
using namespace std;

int main() {

    // c++ 에서 문자열을 다루는 방법 중 하나인 string

    /*
    C스타일로 string 객체를 초기화 할 수 있다.
    cin을 사용하여 string 객체에 키보드 입력을 저장할 수 있다.
    cout을 사용하여 string 객체를 디스플레이 할 수 있다.
    배열 표기를 사용하여 string 객체에 저장되어 있는 개별적인 문자들에 접근할 수 있다.
    */ // => 문자열과 동일함. 

    // string만이 가지고 있는 특장점?
    // 배열을 다른 배열에 통째로 대입할 수 있다. //  string에서는 가능!

    char char1[20];
    char char2[20] = "jauar";
    string str1;
    string str2 = "panda"; // "" get문자가 명시적으로 표현됨.
    // char1 = char2; // 틀리다
    str1 = str2; // 맞다

    cout << str1 << endl;

    // 배열처럼 인덱스를 통해 개별적인 문자에 접근할 수 있다.
    cout << str1[0] << endl;

    return 0;
}