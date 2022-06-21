#include <iostream>
#include <stack>
using namespace std;

int main() {

    int arr1[7] = { 1, 5, 3, 5, 1, 5, 5 };

    int arr2[2][4] = {
        4, 5, 1, 5,
        6, 9, 3, 5
    };

    for (int i = 0; i < 2; i++) {
        for(int j = 0; j < 4; j++) {
            int cnt = 0;
            for(int k = 0; k < 7; k++) {
                if(arr2[i][j] == arr1[k]) {
                    cnt++;
                }
            }
            cout << cnt << " ";
        }
        cout << endl;
    }

    return 0;
}