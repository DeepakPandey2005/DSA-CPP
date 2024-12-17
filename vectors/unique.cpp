#include<iostream>
#include<vector>
using namespace std;
void unique(vector<int>vec){
    int ans;
    for(int val:vec){
        ans^=val;
    }
    cout<<"The unique number from the array is "<<ans<<endl;
}
int main(){
vector<int>vec={1,2,4,4,2,1,7,8,7};
unique(vec);
}