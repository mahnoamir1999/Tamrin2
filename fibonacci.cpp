#include <iostream>
using namespace std;
int main()
{
    int n, i , a=1, b=1, c;
    cout << "Input the numbers: ";
    cin >> n;
    cout << 1 << " " << 1 << " ";
    for (i = 1; i <= n-2; i++) {
    c=a+b;
    cout << c << " ";
    a=b;
    b=c;
    }
    return 0;
}