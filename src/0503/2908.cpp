# include <iostream>
# include <string>
using namespace std;

int main(){

    string a, b;

    cin >> a >> b;

    string n = "";
    string m = "";
    
    for(int i = 0; i < a.length(); i++){
        n = a[i] + n;
    }

    for(int i = 0; i < b.length(); i++){
        m = b[i] + m;
    }

    if (stoi(n) > stoi(m)) {
        cout << n;
    } else {
        cout << m;
    }

    return 0;
}