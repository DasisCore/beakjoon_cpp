#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;
    // \n �Է��� �� �ޱ� ����.
    cin.ignore();

    vector<int> v;

    // ���ڿ��� ������ �Է°��� ��ȯ�� vector�� �Է�
    string line;
    string nums;
    getline(cin, line);
    stringstream sstream(line); 
    while(getline(sstream, nums, ' ')) {
        v.push_back(stoi(nums));
    }

    // ��������
    int s, e, total, cnt;
    s = 0;
    e = 0;
    total = v[0];
    cnt = 0;

    while(e < n) {
        if(total == m) {
            cnt++;
            e++;
            total += v[e];
        } else if (total < m) {
            e++;
            total += v[e];
        } else {
            total -= v[s];
            s++;
        }
    }

    cout << cnt;

    return 0;
}