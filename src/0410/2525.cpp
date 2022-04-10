# include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    int time = a * 60 + b + c;

    cout << (time / 60) % 24 << " " << time % 60 << endl;
    return 0;
}