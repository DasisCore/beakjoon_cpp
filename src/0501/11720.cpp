# include <iostream>
# include <string>
using namespace std;

int main(){

    int n;
    cin >> n;

    int total = 0;

    string a;
    cin >> a;
    for (int i = 0; i < n; i++){
        string num; 
        num = a[i]; // 선언과 할당은 따로 분리해두어야 함.
        total += stoi(num);
    }
    
    cout << total;

    return 0;
}