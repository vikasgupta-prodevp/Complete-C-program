#include <iostream>
using namespace std;
int main()
{
    int num = 100;
    while (num <= 200)
    {
        cout << "Value is " << num << endl;
        if (num == 150)
        {
            break;
        }
        num = num + 10;
    }
    cout << "After break loop" << endl;
    return 0;
}