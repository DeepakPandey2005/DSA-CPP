#include<iostream>
using namespace std;
int main(){
int arr[]={1,4,76,67,3,43,2,67,34,7,99};
int sz=11;

/* for minimum
int min=INT_MAX;
for(int i =0;i<sz;i++){
if(arr[i]<min){
    min=arr[i];
}
}
cout<<"the smallest number of the array is "<<min;
*/

/*  for maximum
int max=INT_MIN;
for(int i =0;i<sz;i++){
if(arr[i]>max){
    max=arr[i];
}
}
cout<<"the biggest number of the array is "<<max;
*/

/* both combine 
int Min=INT_MAX;
int Max=INT_MIN;
for (int i=0;i<sz;i++){
Max=max(arr[i],Max);
Min=min(arr[i],Min);
}
cout<<"The max number from the array is "<<Max<<endl;
cout<<"The min number from the array is "<<Min<<endl;
for(int i=0;i<sz;i++){
    cout<<arr[i];
}*/

/* Linear search 
int target=7;
for (int i=0;i<sz;i++){
if(target==arr[i]){
    cout<<"thala for a reason found at the "<<arr[i];
}
}*/

}
// asdfd