#include<iostream>
using namespace std;
int main()
{
    string s;
    cout << "Enter string" << endl;
    cin >> s;
    cout << "You have intered " << s << endl;
    s.push_back(' G');
    cout << "After using push back " << s << endl;
    // s.pop_back('G');
    // cout << "After using pop back" << s << endl;
    return 0;
}
