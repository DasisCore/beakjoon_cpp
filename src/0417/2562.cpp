# include <iostream>
using namespace std;

int main(){

    int n = 0;
    int com, ans;

    for(int i = 0; i < 9; i++){
        cin >> com;
        if (com > n){
            n = com;
            ans = i + 1;
        }
    }

    cout << n << "\n" << ans;
    return 0;
}