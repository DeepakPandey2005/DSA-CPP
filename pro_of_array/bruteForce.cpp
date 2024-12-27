#include<iostream>
#include<vector>
using namespace std;

vector<int> arrProduct(vector<int>nums){
    int n=nums.size();
    vector<int>ans(n,1);
    for(int i=0;i<n;i++){
        int product=1;
        for(int j=0;j<n;j++){
            if(i!=j){
                product*=nums[j];
            }
        }
        ans[i]=product;
    }
return ans;
}

int main(){
    vector<int>vec={1,4,3,2};
    vector<int>ans=arrProduct(vec);
    for(int i:ans){
        cout<<i<<endl;
    }
return 0;
}