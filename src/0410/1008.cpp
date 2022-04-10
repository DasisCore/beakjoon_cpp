# include <iostream>
using namespace std;

int main()
{
    int a;
    int b;

    cin >> a;
    cin >> b;

    cout.precision(12);
    cout << (double) a / b << endl;
    return 0;
}