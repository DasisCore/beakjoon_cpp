# include <iostream>
using namespace std;

void abc(int *p1, int *p2, int a, int b) {

    *p1 = a + b;
    *p2 = a * b;    
    
}

int main() {
    
    int p1, p2;
    abc(&p1, &p2, 3, 7);
    cout << p1 << " " << p2;

    return 0;
}