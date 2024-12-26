#include<iostream>
#include<vector>
using namespace std;

int findMajorityElement(vector<int>vec){

    int freq=0;
    int ans=0;
for(int i=0;i<vec.size();i++){
    if(freq==0){
        ans=vec[i];
    }
    if(vec[i]==ans){
        freq++;
    }else{
        freq--;
    }
}
return ans;
}

int main(){
    
    vector<int> vec = {1, 2, 1, 3, 1, 2, 2, 2, 2,3,3,3,3,3,3};
    int ans = findMajorityElement(vec);
    cout<<"The majority element is "<<ans;
    return 0;
}