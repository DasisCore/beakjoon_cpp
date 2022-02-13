#include <iostream>

using namespace std;

int main(void) {

    int a;

    cin >> a;

    if(a % 4 == 0 and a % 100 != 0 or a % 400 == 0)
        cout << 1 << endl;
    else
        cout << 0 << endl;

    return 0;

}