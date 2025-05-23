#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int>& nums)
{
    int temp = 0;
    for (int i = 0; i < nums.size() / 2; i++)
    {
        nums[i] = nums[i]^nums[(nums.size()-1) - i];
        nums[(nums.size()-1) - i] = nums[i]^nums[(nums.size()-1) - i];
        nums[i] = nums[i]^nums[(nums.size()-1) - i];

        // temp = nums[i];
        // nums[i] = nums[(nums.size()-1) - i];
        // nums[(nums.size()-1) - i] = temp;
    }
}

int main()
{
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    reverse(nums);
    for(int element: nums){
        cout<<element<<" ";
    }

    return 0;
}