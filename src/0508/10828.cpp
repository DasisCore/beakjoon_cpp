# include <iostream>
# include <stack>
using namespace std;

int main(){

    stack<int> t;

    int n;
    int num;
    string word;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> word;
        if (word == "push"){
            cin >> num;
            t.push(num);
        } else if (word == "top") {
            if (t.empty() == true){
                cout << -1 << endl;
            } else {
                cout << t.top() << endl;
            }
        } else if (word == "size") {
            cout << t.size() << endl;
        } else if (word == "empty") {
            cout << t.empty() << endl;
        } else if (word == "pop") {
            if (t.empty() == true) {
                cout << -1 << endl;
            } else {
                cout << t.top() << endl;
                t.pop();
            }
        }
    }
}