#include <iostream>
using namespace std;


void print()
{
    int k = 0;

    while (k < 5)
    {
        int i=3;
        cout << &i << endl;
        k++;
    }
}

int main()
{

    print();
}