#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> v;
    
    for(int i = 0; i < 9; i++) {
        int n;
        cin >> n;
        v.push_back(n);
    }
    
    sort(v.begin(), v.end());

    int s = 0;
    int e = 8;
    int total = 0;
    for(int i = 0; i < v.size(); i++) {
        total += v[i];
    }

    while (s < e) {
        if(v[s] + v[e] == total - 100) {
            for(int i = 0; i < 9; i++) {
                if(i == s || i == e){
                    continue;
                }
                cout << v[i] << endl;
            }
            break;
        } else if (v[s] + v[e] < total - 100) {
            s++;
        } else {
            e--;
        }
    }

    return 0;
}