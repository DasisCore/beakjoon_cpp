#include <iostream>
using namespace std;

int main(){

    int m, n, total, minnum;
    minnum = 1 << 30;
    total = 0;
    cin >> m >> n;

    for(int i = 0; i * i <= n; i++){
        if (i * i >= m && i * i <= n){
            total = total + (i * i);
            if (i * i < minnum){
                minnum = i * i;
            }
        }
    }

    if (total == 0){
        cout << -1;
    }
    else{
        cout << total << '\n' << minnum;
    }

    return 0;
}