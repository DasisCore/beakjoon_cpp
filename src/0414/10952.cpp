// # include <iostream>
// using namespace std;

// int main(){
//     // 변수 선언
//     int a, b;

//     // 기본적으로 무한 루프
//     while (true) {
//         cin >> a >> b;

//         //  a == 0 and b == 0 일 경우 break
//         if (a == 0 && b == 0) {
//             break;
//         }
//         // 그 외의 경우에는 더한 값을 출력
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