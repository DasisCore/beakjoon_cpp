# include <iostream>
using namespace std;

int main(){

    string a;
    cin >> a;

    int arr[27] = { 0 };
    int cnt = 0;
    
    for(int i = 0; i < a.length(); i++){
        if (a[i] < 97){
            arr[a[i] - 65]++;
        } else {
            arr[a[i] - 97]++;
        }
    }

    int max = 0; 
    int max_index = 0;

    for (int i = 0; i < 27; i++){
        if(max < arr[i]) {
            max = arr[i];
            max_index = i;
        }
    }

    for(int i = 0; i < 27; i++){
        if (max == arr[i]) {
            cnt++;
        }
    }  

    if (cnt > 1){
        cout << '?';
    } else {
        cout << (char) (max_index + 65);
    }

    return 0;
}