#include <iostream>
using namespace std;

int main()
{

    int i;
    int j;
    for (i = 0; i <= 10; i++)
    {
        cout << "\n";
        for (j = 0; j <= i; j++)
        {
            cout << "*";
        }
    }

    return 0;
}