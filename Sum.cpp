#include <iostream>
using namespace std;
int main()
{
    float num , sum=0;
    string option;
    while(1)
    {
        cout << "Input your numbers: ";
        cin >> num;
        sum += num;
        cout <<"Want to continue ? (yes / exit)";
        cin >> option;
        if (option == "yes")
            continue;
        if (option == "exit")
            break;
    }
    cout << "here is the result: " << sum << endl;
    return 0;
}