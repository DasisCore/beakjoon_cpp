#include <iostream>
#include <string>
using namespace std;

int main() {

    int n;
    string s;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> s;
        
        int total = 0;
        int cnt = 1;

        for(int j = 0; j < s.length(); j++){
            if (s[j] == 'O'){
                total += cnt;
                cnt++;
            }
            else if (s[j] == 'X'){
                cnt = 1;
            }
        }
        cout << total << endl;
    }
    return 0;
}