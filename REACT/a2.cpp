#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    cin >> a;
    cout << "hello " << a << "\n";
    getline(cin,a);
    getline(cin,a);
    cout << a << "hellow";
    return 0;
}