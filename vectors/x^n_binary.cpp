#include<iostream>
#include<vector>
using namespace std;
double find(int x,int n){
    long binForm=n;
    double ans=1;
    if(n<0){
        x=1/x;
        binForm=-binForm;
    }

    while(binForm>0){
        if(binForm%2==1){
            ans*=x;
        }
        x*=x;
        binForm/=2;
    }
    return ans;
}
int main(){
    int ans=find(3,2);
    cout<<"the anser of  is : "<<ans;
return 0;
}