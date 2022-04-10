#include <iostream>
using namespace std;

int main() {

    int user_input;

    cout << "저의 정보를 표시해줍니다." << endl;
    cout << "1. 이름" << endl;
    cout << "2. 나이" << endl;
    cout << "3. 성별" << endl;
    cin >> user_input;

    // 약간 다중 if문이라고 생각하면 될 듯.
    switch (user_input) {
        case 1:
        cout << "Psi !" << endl;
        break;

        case 2:
        cout << "99 살" << endl;
        break;

        case 3:
        cout << "남자" << endl;
        break;

        case 4:
        cout << "궁금한게 없군요." << endl;
        break;
        
    }

    return 0;
}