# include <iostream>
# include <stack>
using namespace std;

int main(){
    int n;
    string word;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> word;
        stack<char> t;
        for(int j = 0; j < word.length(); j++){
            if (word[j] == '('){
                t.push('(');
            } else if (word[j] == ')'){
                if (t.empty()){
                    t.push('c');
                    break;;
                }
                t.pop();
            }
        }

        if (t.empty() == true){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}