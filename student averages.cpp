#include <iostream>
using namespace std;
int main()
{
    int number, i=1;
    float score, sum=0, ave, max=0, min=100;
    cout << "Input the Grades: ";
    cin >> number;

    for (i = 1;  i<=number ; i++)
    {
        cout << "enter the "<< "score " << i << ": " ;
        cin >> score;
        sum+=score;
        ave=sum/i;

        if (max < score)
            max=score;
        else if (min > score)
            min=score;
    }

    cout << "maximum: " << max << "\n minimum: " << min <<endl;
    cout << "average: " << ave;
    return 0;
}