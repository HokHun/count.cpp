#include <iostream>
using namespace std;
//138:find first even number in array
int findfirstevennumber(int a[100],int n)
{
    for(int i=0;i<n; i++)
    {
        if(a[i]%2==0)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n,a[100];
    cout<<"nhap n : ";
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cout<<"a["<<i<<"]:=";
        cin >> a[i];
    }
    int min=findfirstevennumber(a,n);
    cout<<min;
}
