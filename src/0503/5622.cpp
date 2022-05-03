# include <iostream>
using namespace std;

int main(){
    string a = "000000000ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    string b;
    cin >> b;

    int ans = 0;
    for (int i = 0; i < b.length(); i++){
        for(int j = 0; j < a.length(); j++){
            if (a[j] == b[i]){
                if(j == 27) {
                    ans += (j / 3) - 1;
                    continue;
                }
                if (j == 30){
                    ans += (j / 3) - 1;
                    continue;
                }
                if (j >= 33){
                    ans += (j / 3) - 1;
                    continue;
                }
                ans += j / 3;
                } 
            }
        }

    cout << ans;

    return 0;
}