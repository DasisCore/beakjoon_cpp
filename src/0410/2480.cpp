# include <iostream>
# include <algorithm>
using namespace std;


int main(){
    int a, b, c;

    cin >> a;
    cin >> b;
    cin >> c;

    if (a == b && b == c){
        cout << 10000 + a * 1000 << endl;
    }
    else if (a == b || b == c){
        cout << 1000 + b * 100 << endl;
    }
    else if (a == c){
        cout << 1000 + a * 100 << endl;
    }
    else{
        cout << max({a, b, c}) * 100 << endl;
    }

    return 0;
}