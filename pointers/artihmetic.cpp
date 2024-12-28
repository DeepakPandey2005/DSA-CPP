#include<iostream>
using namespace std;
int main(){
    int a=10;
    int* ptr2=&a;
    int* ptr1=ptr2+2;// this increase the memory by 4 + 4 =8 bytes because a single int takes 4 bytes
cout<<"the value of the ptr1 is : "<<ptr1<<endl;
cout<<"the value of the ptr2 is : "<<ptr2<<endl;

cout<<"adding 5 in ptr 1"<<ptr1+5<<endl;

    cout<<"after doing subtraction of the both pointers we get : "<<ptr1-ptr2<<endl;

// we also have comparison operators in the pointers 
cout<<"is ptr1 bigger than ptr2 : "<<(ptr1>ptr2)<<endl; //gives true 

return 0;
}