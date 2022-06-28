#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin >> n;
    cin.ignore();

    // ���ڿ� �Է¹ޱ�
    vector<int> v;
    string num;
    string line;
    getline(cin, line);
    stringstream sstream(line);
    while(getline(sstream, num, ' ')) {
        v.push_back(stoi(num));
    }
    
    sort(v.begin(), v.end());

    int check;
    cin >> check;
    cin.ignore();

    // �������� ���
    int s, cnt = 0;
    int e = n - 1;
    int total = v[s] + v[e];

    while (s < e) {
        if(total == check) {
            cnt++;
            total -= v[e];
            e--;
            total += v[e];
        } else if (total < check) {
            total -= v[s];
            s++;
            total += v[s];
        } else {
            total -= v[e];
            e--;
            total += v[e];
        }
    }

    cout << cnt;

    return 0;
}