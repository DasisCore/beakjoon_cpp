#include <iostream>
using namespace std;

int main(){

    int a, b, c, result, start;
    int cnt = 1;

    cin >> result;
    start = result;

    while (1) {
        b = result / 10;
        c = result % 10;
        a = c * 10 + (b + c) % 10;
        if (start == a){
            break;
        }
        else{
        result = a;
        cnt++;
        }
    }
    cout << cnt;
    
    return 0;
}