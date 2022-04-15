# include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i = 1; i < n + 1; i++){

        for(int a = n - i; a > 0; a--){
            cout << " ";
        }

        for (int b = 1; b < i + 1; b++){
            cout << "*";
        }
        cout << endl;
    }


    return 0;
}
