#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;
    cin >> n;

    // �����佺�׳׽��� ü�� ����ϱ� ����
    vector<int> isPrime(n + 1, 1);
    vector<int> v;

    // 0�� 1�� �Ҽ��� �ƴϴ�.
    isPrime[0] = 0;
    isPrime[1] = 0;

    // n���� 50,000 ������ �Ǹ� int�� ������ �Ѿ�Ƿ�
    // long long���� �������־�� �Ѵ�.
    for(long long i = 2; i < n + 1; i++) {
        // �Ҽ� �Ǻ��� �̹� �����ٸ� continue
        if(not isPrime[i]) continue;

        // �� ���� ������� �Ҽ��� �ƴϹǷ� �ش� ������ ���ܽ�Ų��.
        for(long long j = i * i; j < n + 1; j += i) {
            isPrime[j] = 0;
        }
    }

    // n������ �Ҽ��Ǻ��� �����ٸ� �ش� ������ ����� �� �ֵ���
    // vector v�� �������ش�.
    for(int i = 0; i < n + 1; i++) {
        if(isPrime[i]) v.push_back(i);
    }

    // vector v�� �̿�, ���ӵ� �Ҽ��� ���� �����ش�.
    // ���⼭�� for���� �̿�������, �������͸� �̿��ϸ� �� ������
    // ���� �� �ִ�.
    int ans = 0;
    for(int i = 0; i < v.size(); i++) {
        int cnt = 0;
        for(int j = i; j < v.size(); j++) {
            cnt += v[j];
            if(cnt > n) break;
            if(cnt == n) ans++;
        }
    }

    // ���� ���
    cout << ans;

    return 0;
}