# include <iostream>
using namespace std;


int self(int n){
    int result = n;

    while (n){
        result += n % 10;
        n = n / 10;
    }

    return result;
}


int main(){
    int check[10010] = {0};

    for (int i = 1; i < 10000; i++){
        int temp = self(i);
        if (temp > 10000) {
            continue;
        }
        check[temp] = 1;
    }

    for (int i = 1; i < 10000; i++){
        if (check[i] == 0) {
            cout << i << endl;
        }
    }

    return 0;
}