#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

// �ִ����� ���ϱ�
int gcd(int a, int b) {
    int temp;

    // a�� b���� ���� ��쿡��.
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }

    // �ִ����� ���ϱ�.
    while(a % b != 0) {
        temp = a;
        a = b;
        b = temp % b;
    }

    return b;
}


int main() {

    int n;
    cin >> n;
    // \n�� �����ֱ� ����.
    cin.ignore();

    for(int i = 0; i < n; i++) { 
        vector<int> v;     
        string line;
        string num;  
        getline(cin, line);
        // ���ڿ� �ɰ� �Է� �ޱ�
        stringstream sstream(line);
        while(getline(sstream, num, ' ')) {
            v.push_back(stoi(num));
        }
        
        int temp = 0;
        int maxGCD = 0;
        for(int j = 0; j < v.size() - 1; j++) {
            for(int k = j + 1; k < v.size(); k++){
                temp = gcd(v[j], v[k]);
                // ���� ������.
                maxGCD = maxGCD < temp ? temp : maxGCD;
            }
        }
        cout << maxGCD << endl;
    }

    return 0;
}