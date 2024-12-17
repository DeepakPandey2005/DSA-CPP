#include <iostream>
using namespace std;

void findSubarrays(int arr[], int sz)
{
    int n = sz;
    for (int st = 0; st < n; st++)
    {
        for (int end = st; end < n; end++)
        {
            for (int i = st; i <= end; i++)
            {

                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
}

void maxSubArraySum(int arr[], int sz)
{
    int maxSum = INT_MIN;
    for (int i = 0; i < sz; i++)
    {
        int currSum = 0;
        for (int j = i; j < sz; j++)
        {
            currSum += arr[j];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << "Max subarray sum is " << maxSum << endl;
}

int main()
{
    int arr[] = {-1, 2, -3, 4, -5};
    int sz = 5;
    // findSubarrays(arr,sz);
    maxSubArraySum(arr, sz);

    return 0;
}