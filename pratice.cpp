#include <iostream>
using namespace std;

void print()
{
    takeInput();
    cout << "The function has returned here after ther return call" << endl;
    
    
}

void takeInput()
{
    print();
    int data;

    cin >> data;

    for (int i = 1; i < 4; i++)
    {
        cout << "The number is " << data << endl;
        if (data % 2 == 0)
        {
            cout << " The number is divisible by 0";
            return;
        }
    }
}

int main()
{
   

    takeInput();
     print();
}