#include <iostream>
using namespace std;

int main(){

    int a = 1;
    int b = 35;

    int temp;

    temp = b;
    b = a;
    a = temp;

    cout << a << endl;
    cout << b << endl;


    return 0;
}