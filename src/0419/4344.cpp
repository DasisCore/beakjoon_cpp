#include <iostream>
using namespace std;

int main(){
    int a, n, cnt;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a;
        int arr[a] = { 0 };
        int total = 0;
        int num = 0;

        for(int j = 0; j < a; j++){
            cin >> num;
            arr[j] = num;
            total += num;
        }

        int avg = total / a;
        
        cnt = 0;
        for(int j = 0; j < a; j++){
            if (arr[j] > avg){
                cnt++;
            }
        }

        double ans = (double) cnt / a * 100;

        cout << fixed;
        cout.precision(3);
        cout << ans << "%" << endl;
    }

    return 0;
}