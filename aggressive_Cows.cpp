#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int>arr,int n,int c,int minAllowDist){
    int cow=1,lastStallPos=arr[0];
    for(int i=0;i<n;i++){
     if(arr[i]-lastStallPos>=minAllowDist){
        cow++;
        lastStallPos=arr[i];
     }
     if(cow==c) return true;
    }
    return false;
}

int getDistance(vector<int>arr,int n,int c){
sort(arr.begin(),arr.end());

int st=1,end=arr[n-1]-arr[0];
int ans=-1;
while (st<=end)
{
    int mid=st+(end-st)/2;
    if(isPossible(arr,n,c,mid)){//right
    ans=mid;
    st=mid+1;
    }else{//left
    end=mid-1;
}
}
return ans;
}

int main(){
    vector<int>arr={1,2,8,5,9};
    int c=3,n=5;
    cout<<"The longest min distance is : "<<getDistance(arr,n,c);
return 0;
}