#include <iostream>
using namespace std;

int main()
{

    int i, j,n;
    cout<<"Enter Number:";
    cin>>n;

    for (i = n; i >= 1; i--)
    {
        for (j = i; j <= n; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    for (i = 1; i <= n-1; i++)
    {
        for (j=i;j<=n-1;j++)
        {
        cout << "* ";
        }
        cout<<"\n";
    }
}