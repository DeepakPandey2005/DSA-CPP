#include <iostream>
#include <vector>
using namespace std;
int find(vector<int> vec)
{
    int maxWater = 0;
    int st = 0;
    int end = vec.size() - 1;
    while (st < end)
    {
        int w = end - st;
        int ht = min(vec[st], vec[end]);
        int currArea = w * ht;
        maxWater = max(maxWater, currArea);

        vec[st] < vec[end] ? st++ : end--;
    }
    return maxWater;
}
int main()
{
    vector<int> vec = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int ans = find(vec);
    cout << "answer is : " << ans;
    return 0;
}