#include<iostream>
#include<vector>
using namespace std;
int findSingle(vector<int>vec){
    int n=vec.size();
int st=0,end=vec.size()-1;
while(st<=end){
    int mid=st+(end-st)/2;
    if(mid==0 && vec[0]!=vec[1]) return vec[mid];
    if(mid==n-1 && vec[n-1]!=vec[n-2]) return vec[mid];

    if(vec[mid]!=vec[mid-1] && vec[mid] != vec[mid+1]){
        return vec[mid];
    }

    if(mid%2==0){//even
    if(vec[mid]==vec[mid+1]){//right
    st=mid+1;

    }else{end=mid-1;

    }

    }else{
        if(vec[mid]==vec[mid+1]){//left
    end=mid-1;

    }else{st=mid+1;

    }
    }

}return -1;
}
int main(){
    // vector<int>vec={1,1,2,3,3,4,4,8,8};
    vector<int>vec={3,3,7,7,10,11,11};
    int ans=findSingle(vec);
    cout<<"The single number of the sorted array is  : "<<ans;
return 0;
}