#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    string word;
    cin >> word;

    int s = 0;
    int e = 0;
    map<char, int> m;
    m[word[0]] = 1;

    int answer = 0;
    int cnt = 1;
    while(e < word.size()){
        if(cnt <= n) {
            int total = 0;
            for(auto j = m.begin(); j != m.end(); j++) {
                total += j->second;
            }
            if(answer < total) {
                answer = total;
            }
        }

        if(e == word.size() - 1) break;

        if(cnt > n) {
            m[word[s]] -= 1;
            if(m[word[s]] == 0) {
                cnt--;
            }
            s++;
        } else {
            e++;
            if(m.find(word[e]) != m.end()) {
                if(m[word[e]] == 0) {
                    cnt++;
                }
                m[word[e]]++;
            } else {
                m[word[e]] = 1;
                cnt++;
            }
        }
    }

    cout << answer;


    return 0;

}