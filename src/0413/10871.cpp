// # include <iostream>
// using namespace std;

// int main(){

//     int n, x, a;
//     cin >> n >> x;

//     for(int i = 0; i < n; i++){

//         cin >> a;
//         if(a < x) {
//             cout << a << " ";
//         }
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){

//     int n, x, a;

//     cin >> n >> x;

//     while (n--) {
//         cin >> a;
//         if (a < x) {
//             cout << a << " ";
//         }
//     }
    
//     return 0;
// }

#include <stdio.h>
using namespace std;

int main(){

    int n, x, a;

    scanf("%d %d", &n, &x);

    while (n--) {
        scanf("%d", &a);

        if (a < x) {
            printf("%d ", a);
        }
    }
}