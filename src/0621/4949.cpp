#include <iostream>
#include <stack>
using namespace std;

int main() {
    
    // 정지 조건이 나올 때까지 반복하기 위함.
    bool flag = true;

    while(flag) {
        // 스택 만들어주기
        stack<char> t;

        // 문자열 입력 받기
        string word;
        // getline을 통해 공백을 포함한 문자열을 받아주었다.
        getline(cin, word);

        // 제일 첫 글자가 '.'이라면 종료 조건
        if(word[0] == '.') {
            break;
        }

        // 스택을 이용한 풀이, 조건에 집중을 해야한다.
        for(int i = 0; i < 100; i++){
            if (word[i] == '(' || word[i] == '[') {
                t.push(word[i]);
            }

            if (word[i] == ')') {
                if ( t.size() == 0 || t.top() != '(') {
                    cout << "no" << endl;
                    break;
                } else {
                    t.pop();
                }
            }

            if (word[i] == ']') {
                if ( t.size() == 0 || t.top() != '[') {
                    cout << "no" << endl;
                    break;
                } else {
                    t.pop();
                }
            }
            
            if (word[i] == '.') {
                if (t.size() == 0) {
                    cout << "yes" << endl;
                    break;
                } else {
                    cout << "no" << endl;
                    break;
                }
            }
        }
    }


    return 0;
}