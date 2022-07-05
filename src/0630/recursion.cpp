#include <iostream>
using namespace std;

int fact = 1;
void recur(int n) {

    if(n == 1) {
        cout << fact;
        return;
        
    }
    fact *= n;
    
    recur(n - 1);

}

int main(){
    recur(5);
    return 0;
}