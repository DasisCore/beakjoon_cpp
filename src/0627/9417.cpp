#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

// 최대공약수 구하기
int gcd(int a, int b) {
    int temp;

    // a가 b보다 작을 경우에만.
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }

    // 최대공약수 구하기.
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
    // \n을 없애주기 위해.
    cin.ignore();

    for(int i = 0; i < n; i++) { 
        vector<int> v;     
        string line;
        string num;  
        getline(cin, line);
        // 문자열 쪼개 입력 받기
        stringstream sstream(line);
        while(getline(sstream, num, ' ')) {
            v.push_back(stoi(num));
        }
        
        int temp = 0;
        int maxGCD = 0;
        for(int j = 0; j < v.size() - 1; j++) {
            for(int k = j + 1; k < v.size(); k++){
                temp = gcd(v[j], v[k]);
                // 삼항 연산자.
                maxGCD = maxGCD < temp ? temp : maxGCD;
            }
        }
        cout << maxGCD << endl;
    }

    return 0;
}