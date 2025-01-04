#include <iostream>
#include <vector>
using namespace std;

// this code of binary search has time complexity of O(log n)

int binarySearch(vector<int> vec, int target)
{
    int st = 0, end = vec.size() - 1;
    while (st <= end)
    {
        // int mid=(st+end)/2;
        int mid = st + (end - st) / 2; // this is better approach
        if (target < vec[mid])
        {
            end = mid - 1;
        }
        else if (target > vec[mid])
        {
            st = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    vector<int> vec = {0, 2, 4, 6, 8, 9, 16, 18, 90};
    int target = 9;

    int ans = binarySearch(vec, target);
    cout << "The target is found at the index : " << ans;
    return 0;
}