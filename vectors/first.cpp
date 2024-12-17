#include<iostream>
#include<vector>
using namespace std;

void printVec(vector<int>vec){
// for loop in the vector 
for (int val : vec){
    cout<<"the value from vector are "<<val<<endl;
}
}

void vecProperties(vector<int>& vec){
cout<<"SOME BASIC FUNCTIONS ON THE VECTOR "<<endl;
cout<<"size of the given vector is "<<vec.size()<<endl;
cout<<"capacity of the given vector is "<<vec.capacity()<<endl;
}

void insertAtBack(vector<int> &vec,int data){
vec.push_back(data);
}
void deleteAtBack(vector<int>&vec){
vec.pop_back();
}

int main(){
    // vector<int>vec;
    // vector<int>vec(3,0);
    vector<int>vec={3,6,8,1,0,4,2};
    vecProperties(vec);
    insertAtBack(vec,99);
    printVec(vec);
    vecProperties(vec);
    deleteAtBack(vec);
    vecProperties(vec);
return 0;
}