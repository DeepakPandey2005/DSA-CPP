#include <iostream>
#include <vector>
using namespace std;

// the time complexity of this will be O(n)
vector<int> arrProductBetter(vector<int> nums)
{
    int n = nums.size();
    vector<int> ans(n, 1);
    vector<int> prefix(n, 1);
    vector<int> suffix(n, 1);

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }
    for (int i = 0; i < n; i++)
    {
        ans[i] = prefix[i] * suffix[i];
    }

    return ans;
}

// the time complexity of this program will be O(n) ans space completiy will be O(1)
vector<int> arrProductBest(vector<int> nums)
{
    int n = nums.size();
    vector<int> ans(n, 1);

    for (int i = 1; i < n; i++)
    {
        ans[i] = ans[i - 1] * nums[i - 1];
    }
    int suffix = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        suffix *= nums[i + 1];
        ans[i] *= suffix;
    }
    return ans;
}

int main()
{
    vector<int> vec = {1, 4, 3, 2};
    //  Both the function have time complexity of O(n) but the best approach doesnt take more storage as it have a space complexity of O(1)
    // vector<int>ans=arrProductBetter(vec);
    vector<int> ans = arrProductBest(vec);
    for (int i : ans)
    {
        cout << i << endl;
    }
    return 0;
}