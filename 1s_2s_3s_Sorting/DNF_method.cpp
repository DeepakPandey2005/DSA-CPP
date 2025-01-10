// Dutch National Flag Method
#include <iostream>
#include <vector>
using namespace std;

void arrangeNums(vector<int> &nums)
{
    int n = nums.size();
    int low = 0, high = n - 1, mid = 0;
    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            mid++;
            low++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

void displayVec(vector<int> nums)
{
    for (int val : nums)
    {
        cout << val << " ";
    }
}
int main()
{
    vector<int> vec = {2, 0, 2, 1, 1, 0, 1, 2, 0, 2};
    arrangeNums(vec);
    displayVec(vec);
    return 0;
}