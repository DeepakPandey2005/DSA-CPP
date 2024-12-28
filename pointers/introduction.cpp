#include<iostream>
using namespace std;
int main(){
    int a=10;
    int* ptr=&a;
    int** ptr2=&ptr;

    // & contains the address of 
    // * is used to point a variable to the address 
    // * is also used as a dereference of the variable it will give the value store to that memory addresss 

// we can alos assign a null pointer like 
int *nullPtr=NULL;
cout<<"the value of nullPtr is "<<nullPtr<<endl;

cout<<"by using dereference operator on a :"<<*(&a)<<endl;
    cout<<"address of a is "<<&a<<endl;
    cout<<"value of a is "<<a<<endl;

    cout<<"address of ptr is "<<&ptr<<endl;
    cout<<"value of ptr is "<<*ptr<<endl;

    cout<<"address of ptr2 is "<<&ptr2<<endl;
    cout<<"value of ptr2 is "<<**ptr2<<endl;

    cout<<a<<endl; 
    cout<<*ptr<<endl; 
    cout<<**ptr2<<endl;


return 0;
}