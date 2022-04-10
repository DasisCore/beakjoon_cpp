#include <iostream>
using namespace std;

int main() {

    int i, sum = 0;

    for (i = 1; i < 11; i++){
        cout << i << endl;
        sum += i;
    }
    cout << endl;
    cout << sum << endl;

    return 0;
}