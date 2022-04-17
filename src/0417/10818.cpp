#include <iostream>
using namespace std;

int main(){
    int ans1 = 1000001;
    int ans2 = -1000001;
    int com = 0;
    int n;
    
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> com;
        if (com < ans1){
            ans1 = com;
        }

        if (com > ans2){
            ans2 = com;
        }
    }

    cout << ans1 << " " << ans2;

    return 0;
}