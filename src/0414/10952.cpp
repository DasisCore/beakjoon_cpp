// # include <iostream>
// using namespace std;

// int main(){
//     // ���� ����
//     int a, b;

//     // �⺻������ ���� ����
//     while (true) {
//         cin >> a >> b;

//         //  a == 0 and b == 0 �� ��� break
//         if (a == 0 && b == 0) {
//             break;
//         }
//         // �� ���� ��쿡�� ���� ���� ���
//         else {
//             cout << a + b << endl;
//         }
//     }
//     return 0;
// }


# include <stdio.h>
using namespace std;

int main(){

    int a, b;

    while (true) {
        scanf("%d %d", &a, &b);

        if (a == 0 && b == 0){
            break;
        }
        printf("%d\n", a + b);
    }
    return 0;
}