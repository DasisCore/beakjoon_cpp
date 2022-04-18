#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    
    int arr[n] = { 0 };
    int big = 0;
    double result = 0;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] > big){
            big = arr[i];
        }
        result += arr[i];
    }

    result = (result / big * 100) / n;
    cout << fixed;
    cout.precision(6);
    cout << result;

    return 0;
}