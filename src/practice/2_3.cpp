#include <iostream>
#include <cstring>

using namespace std;

int main(){
    //사용자 입력
    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++programing";

    cout << "안녕하세요! 저는 " << name2;
    cout << "입니다! 성함이 어떻게 되시나요?\n";
    cin >> name1;
    //cin.get(name1, Size);
    // cin >> 데이터를 입력하는 함수.
    // 이 코드는 공백을 저장하지 못함 // 프로그램은 공백을 알지 못함
    // 해결하기 위해 cin이 아니라 cin.getline(Name, size)를 사용함.

    cout << "음, " << name1 << "씨, 당신의 이름은 ";
    cout << strlen(name1) << "자입니다만\n";
    cout << sizeof(name1) << "바이트 크기의 배열에 저장되었습니다. \n";
    cout << "이름이 " << name1[0] << "자로 시작하는군요.\n";
    name2[3] = '\0';
    cout << "제 이름의 처음 세 문자는 다음과 같습니다: ";
    cout << name2 << endl;

    cin.getline(name1, Size);
    // get과 getline은 동일한 방식으로 작동한다.

    return 0;
}