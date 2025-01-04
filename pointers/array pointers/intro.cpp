#include <iostream>
using namespace std;
int main()
{

    int marks[] = {10, 20, 30, 40, 50};
    int a = 90;
    // array is a constant pointer inthe c++ so we cannot change it
    // marks=&a;//this will give error

    cout << marks << endl;  // this will print the memory address of marks[0]
    cout << *marks << endl; // this is will print the value at that address by using the dereference operator

    /*we can use the increment operator or can use addition on the array address to see other value also because the array follow a increasing order of the memory address*/

    cout << *(marks + 1) << endl;
    cout << *(marks + 2) << endl;
    cout << *(marks + 3) << endl;
    cout << *(marks + 4) << endl;

    return 0;
}