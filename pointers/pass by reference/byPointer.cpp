#include <iostream>
using namespace std;

// in this code the main function is passing the memory address by using the & operator and we are catching it using the * in the change val function and then we indirectly change the value of the a

void changeVal(int *a, int b)
{
    cout << "\t \n IN THE CHANGEVAL FUNCTION" << endl;

    *a = 20;
    b = 20;
    cout << "the value of a in the main is " << *a << endl;
    cout << "the value of b in the main is " << b << endl;
}

int main()
{
    int a = 10;
    int b = 10;
    changeVal(&a, b);
    cout << "\t \n IN THE MAIN FUNCTION" << endl;
    cout << "the value of a in the main is " << a << endl;
    cout << "the value of b in the main is " << b << endl;
    return 0;
}