#include <iostream>
using namespace std;

/*
here the & operator is an alias operator which tells the program that we are pointing to the same memory address which we have passed to the function */

void changeVal(int &a, int b)
{
    cout << "\t \n IN THE CHANGEVAL FUNCTION" << endl;

    a = 20;
    b = 20;
    cout << "the value of a in the main is " << a << endl;
    cout << "the value of b in the main is " << b << endl;
}

int main()
{
    int a = 10;
    int b = 10;
    changeVal(a, b);
    cout << "\t \n IN THE MAIN FUNCTION" << endl;
    cout << "the value of a in the main is " << a << endl;
    cout << "the value of b in the main is " << b << endl;
    return 0;
}