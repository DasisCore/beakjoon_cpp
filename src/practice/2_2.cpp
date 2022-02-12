#include <iostream>
using namespace std;

int main() {
    
    // 문자열 : 문자의 열.
    char a[6] = { 'H', 'e', 'l', 'l', 'o', '\0' } ;
    // 문자의 사이즈를 비워두면 컴파일러가 알아서 맞춰줌
    // 따라서 char a[] = "Hello"로 하면 됨. 
    cout << a << endl;

    return 0;

}