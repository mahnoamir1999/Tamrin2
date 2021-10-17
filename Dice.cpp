#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int a;
    srand(time(NULL));

    label:

    a=rand()%6+1;
    cout << a << " ";
    if (a==6)
        goto label;

    return 0;
}