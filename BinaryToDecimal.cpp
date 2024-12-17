#include<iostream>
using namespace std;

int convert(int binary){
    int bin=binary;
    int pow=1;
    int decimal=0;
     int rem;   
    while (bin>0){
         rem=bin%10;
         bin=bin/10;
        decimal+=(rem*pow);
        pow=pow*2;
    }
    return decimal;
}

int main(){
    int bin=101;
    cout<<"the decimal format is "<<convert(bin)<<endl;
return 0;
}