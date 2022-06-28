#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {

    int n;
    cin >> n;
    cin.ignore();

    vector<int> v;

    string line;
    string num;
    getline(cin, line);
    stringstream sstream(line);
    while(getline(sstream, num, ' ')) {
        v.push_back(stoi(num));
    }

    sort(v.begin(), v.end());

    int s = 0;
    int e = v.size() - 1;

    // ������ ���� �ٸ� ����
    int x = v[0];
    int y = v[n - 1];

    // �� �����Ͱ� �����Ǹ� ����
    while (s < e) {
        // ���밪�� ������ ���� ����
        if(abs(x + y) > abs(v[s] + v[e])){
            x = v[s];
            y = v[e];
        }

        if(v[s] + v[e] < 0) {
            s++;
        } else {
            e--;
        }
    }
    
    cout << x << ' ' << y; 
    
    return 0;
}