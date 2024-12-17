#include <iostream>
using namespace std;

void kadanesMaxSubArray(int arr[], int sz)
{
    int maxSum = INT_MIN;
    int currSum = 0;
    for (int i = 0; i < sz; i++)
    {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << "max subarray sum is " << maxSum;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int sz = 5;
    kadanesMaxSubArray(arr, sz);
    return 0;
}