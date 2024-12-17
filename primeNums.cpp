#include<iostream>
using namespace std;
bool isPrime=true;
int checkPrime(int n){
for(int i=2;i<n;i++){
     if(n%i==0){
        isPrime=false;
     }
} 
return isPrime;
}
int main(){
    cout<<checkPrime(17);

}