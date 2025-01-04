#include <iostream>
#include <vector>
using namespace std;

int findTarget(vector<int> vec, int target)
{
    int st = 0, end = vec.size() - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (vec[mid] == target)
        {
            return mid;
        }
        if (vec[st] <= vec[mid])
        {
            if (vec[st] <= target && target <= vec[mid])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else
        {
            if (vec[mid] <= vec[end])
            {
                if (vec[mid] <= target && target <= vec[end])
                {
                    st = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> vec = {6, 7, 0, 1, 2, 3, 4, 5};
    int target = 7;
    int ans = findTarget(vec, target);
    cout << "The target is found at the index : " << ans;
    return 0;
}