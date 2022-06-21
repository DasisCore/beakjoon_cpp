#include <iostream>
#include <stack>
using namespace std;

int main() {
    
    // ���� ������ ���� ������ �ݺ��ϱ� ����.
    bool flag = true;

    while(flag) {
        // ���� ������ֱ�
        stack<char> t;

        // ���ڿ� �Է� �ޱ�
        string word;
        // getline�� ���� ������ ������ ���ڿ��� �޾��־���.
        getline(cin, word);

        // ���� ù ���ڰ� '.'�̶�� ���� ����
        if(word[0] == '.') {
            break;
        }

        // ������ �̿��� Ǯ��, ���ǿ� ������ �ؾ��Ѵ�.
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