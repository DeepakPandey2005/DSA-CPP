#include<iostream>
using namespace std;

int convert(int deci){
    int dec=deci;
    int pow=1;
    int binary=0;
     int rem;   
    while (dec>0){
         rem=dec%2;
         dec=dec/2;
        binary+=(rem*pow);
        pow=pow*10;
    }
    return binary;
}

int main(){
    int dec=5;
    cout<<"the binary format is "<<convert(dec)<<endl;
return 0;
}