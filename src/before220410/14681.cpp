#include <iostream>
using namespace std;

int main(void) {

    int a, b;

    cin >> a >> b;

    if(a < 0 and b < 0)
        cout << 3 << endl;
    else if (a > 0 and b < 0)
        cout << 4 << endl;
    else if (a > 0 and b > 0)
        cout << 1 << endl;
    else
        cout << 2 << endl;
    
    return 0;
        

}