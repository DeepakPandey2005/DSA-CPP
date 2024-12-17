#include <iostream>
#include <vector>
using namespace std;

// This is Brute Force approach
vector<int> pairSum(vector<int> vec, int target)
{
    int n = vec.size();
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (vec[i] + vec[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

// This is a better approach
vector<int> pairSumBy2Pointer(vector<int> vec, int target)
{
    int n = vec.size();
    int st = 0;
    int end = n - 1;
    vector<int> ans;

    while (st < end)
    {
        int pairSum = vec[st] + vec[end];
        if (pairSum < target)
        {
            st++;
        }
        else if (pairSum > target)
        {
            end--;
        }
        else
        {
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
    }
    return ans;
}
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 14, 19, 25};
    int target = 28;
    // vector<int>ans=pairSum(vec,target);
    vector<int> ans = pairSumBy2Pointer(vec, target);
    cout << "The pair for target : " << target << " is " << ans[0] << " & " << ans[1];
}