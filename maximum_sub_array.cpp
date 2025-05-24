#include <iostream>
using namespace std;

int maximumSubarraySum_BruteForce(int arr[], int arr_size)
{
    int maxSum = 0;

    for (int start = 0; start < arr_size; start++)
    {
        int subArraySum = 0;
        for (int end = start; end < arr_size; end++)
        {
            subArraySum += arr[end];
            if (subArraySum > maxSum)
            {
                maxSum = subArraySum;
            }
        }
    }
    return maxSum;
}

int maximumSubarraySum_kadanesAlgorithm(int arr[], int arr_size)
{
    int currSum = 0, maxSum = 0;
    for (int i = 0; i < arr_size; i++)
    {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    return maxSum;
}

int main()
{

    // int arr[] = {1, 2, 3, 4, 5};
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int arr_size = sizeof(arr) / sizeof(int);

    for (int st = 0; st < arr_size; st++)
    {
        for (int end = st; end < arr_size; end++)
        {
            int sum = 0;
            for (int k = st; k <= end; k++)
            {
                cout << arr[k] << " ";
                sum += arr[k];
            }
            cout << "= " << sum << endl;
            // cout << " , ";
        }
        cout << endl;
    }

    cout << maximumSubarraySum_BruteForce(arr, arr_size)<<endl;
    cout << maximumSubarraySum_kadanesAlgorithm(arr, arr_size)<<endl;

    return 0;
}