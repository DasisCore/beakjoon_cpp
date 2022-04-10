#include <iostream>
using namespace std;

int main() {

    int n;
    string num;
    int cnt = 0;
    int a = 0;
    st

    cin >> n >> num;

    for (int i = 0; i < n; i++){
        if (num[i] == 0){
            cnt = 0;
        }
        else {
            a++;
            if (a > cnt){
                cnt = a;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}