# include <iostream>
# include <stack>
using namespace std;

int main(){
    int k, n;
    int total = 0;
    cin >> k;
    stack<int> t;

    for(int i = 0; i < k; i++){
        cin >> n;
        if (n == 0) {
            t.pop();
        } else {
            t.push(n);
        }
    }

    while (not t.empty()){
        total += t.top();
        t.pop();
    }

    cout << total;

    return 0;
}