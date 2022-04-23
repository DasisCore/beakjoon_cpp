# include <iostream>
using namespace std;

int main(){
    
    char ch;
    cin >> ch;
    char buf[5] = {'A', 'B', 'A', 'A', 'Q' };

    int flag = 0;
    for (int i = 0; i < 5; i++){
        if (buf[i] == ch)
        flag = 1;
        break;
    }
    

    if (flag == 1){
        cout << 'O';
    }
    else{
        cout << 'X';
    }
    
    return 0;
}