#include <iostream>
using namespace std;
int main()
{
    int h, m, s;
    cout << "enter the hour: ";
    cin >> h;
    cout << "enter the minuete: ";
    cin >> m;
    cout << "enter the second: ";
    cin >> s;
    for (h;  h > 0 ; h--) {
        m+=60;
        for (m ; m > 0 ; m--) {
            s+=60;
        }
    }
    cout << s << " seconds";
    return 0;
}