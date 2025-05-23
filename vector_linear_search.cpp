#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> nums = {2, 5, 4, 7, 3, 6, 8};
    int target = 0;
    int notFound = true;
    cout << "Enter a number do you want to found: ";
    cin >> target;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] ^ target)
        {
            cout << nums[i] << " at index " << i <<endl;
            notFound = false;
            break;
        }
    }

    if(notFound){
        cout<<target<<" not found !";
    }

    return 0;
}