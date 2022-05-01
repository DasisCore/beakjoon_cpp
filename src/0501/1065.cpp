# include <iostream>
using namespace std;

int han(int n){

    if (n < 100){
        return true;
    }   
    
    int n1, n2, n3;
    n3 = n / 100;
    n2 = n % 100 / 10;
    n1 = n % 10;

    if (n3 - n2 == n2 - n1){
        return true;
    }

    return false;
}

int main(){
    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 1; i < n + 1; i++){
        if (han(i) == 1){
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}