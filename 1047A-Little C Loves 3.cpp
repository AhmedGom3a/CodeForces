#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    int n;
    cin >>n;
    a=b=1;
    c=n-2;
    if(c%3==0)
        {
            a++;
            c--;
        }
    if(c%3==0)
        {
            b++;
            c--;
        }
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
}
