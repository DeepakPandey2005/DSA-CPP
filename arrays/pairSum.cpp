#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> pairSum(vector<int>& vec,int target){
    sort(vec.begin(),vec.end());
    
int st=0;
int end=vec.size()-1;
vector<int>ans;
while(st<end){
    if(vec[st]+vec[end]>target){
      end--;
    }else if(vec[st]+vec[end]<target){
     st++;
    }else{
    ans.push_back(st);
    ans.push_back(end);
    return ans;
    
    }
}
return ans;
}
int main(){
    vector<int>vec={3,2,4};
    // vector<int>vec={21,4,8,1,9,12,0,7,4,2,4,6,8,9};
    int target=6;
 vector<int>ans=pairSum(vec,target);
 cout<<ans[0]<<" , "<<ans[1];
return 0;
}