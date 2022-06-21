#include <iostream>
#include <cstring>
using namespace std;


int main() {

    int map[4][4] = {
        6, 6, 5, 4,
        1, 2, 3, 4,
        1, 1, 1, 1,
        5, 4, 3, 2
    };

    int x , y;
    cin >> x >> y;

    int sum = 0;
    sum += map[x - 1][y + 0]; // 왼쪽
    sum += map[x + 1][y + 0]; // 오른쪽
    sum += map[x + 0][y - 1]; // 아래
    sum += map[x + 0][y + 1]; // 위

    // 이 단순 반복 코드를 for문을 이용해서 정리해보자.

    cout << sum;
    
    
    
    

    return 0;
}