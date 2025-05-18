#include <iostream>
using namespace std;

int main()
{
    int num = 1, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = 0; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            cout << "adding: " << i << endl;
            sum += i;
        }
    }

    cout << "Sum : " << sum;

    return 0;
}