#include <iostream>
using namespace std;

void recur(int cur) {

    if (cur == 7) {
        return;
    }

    cout << cur;

    return recur(cur + 1);
}

int main() {

    int a;

    cin >> a;
    recur(a);
    
    return 0;
}