#include <iostream>
using namespace std;

int main()
{
    int dcml = 0, bnry = 0, temp = 0,pow = 1;
    cout << "Enter a number: ";
    cin >> dcml;
    temp = dcml;
    for (int i = 0; temp > 0; i++)
    {
        int rmndr = temp % 2;
        temp /= 2;
        bnry += rmndr*pow;
        pow *= 10;
    }

    cout << dcml << " = " << bnry << endl;

    return 0;
}