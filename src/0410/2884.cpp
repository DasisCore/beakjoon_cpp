# include <iostream>
using namespace std;


int main(){
    int a, b, time;

    cin >> a;
    cin >> b;

    time = a * 60 + b - 45;

    if (time < 0){
        cout << "23 " << 60 + time << endl;
    }
    else{
        cout << time / 60 << " " << time % 60 << endl; 
    }

    return 0;
}