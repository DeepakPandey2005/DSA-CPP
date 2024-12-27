#include<iostream>
#include<vector>
using namespace std;
int find(vector<int>vec){
int maxWater=0;
for(int i=0;i<vec.size();i++){
    for(int j=i+1;j<vec.size();j++){
        int w=j-1;
        int ht=min(vec[i],vec[j]);
        int currSum=w*ht;
        maxWater=max(maxWater,currSum);

    }
}
return maxWater;
}
int main(){
    vector<int>vec={1,8,6,2,5,4,8,3,7};
    int ans=find(vec);
    cout<<"answer is :"<<ans;
return 0;
}