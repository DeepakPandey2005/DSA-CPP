#include <iostream>
#include <vector>
using namespace std;

// this code of binary search has time complexity of the O(n) means linear time complexity

int binarySearch(vector<int> vec, int target, int st, int end)
{

    if (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (target < vec[mid])
        {
            return binarySearch(vec, target, st, mid - 1);
        }
        else if (target > vec[mid])
        {
            return binarySearch(vec, target, mid + 1, end);
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
    vector<int> vec = {0, 1, 2, 4, 6, 8, 9, 16, 18, 90};
    int target = 90;

    int ans = binarySearch(vec, target, 0, vec.size() - 1);
    cout << "The target is found at the index : " << ans;
    return 0;
}