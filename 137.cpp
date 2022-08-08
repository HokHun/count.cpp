#include <iostream>
using namespace std;
//137:find number minimum in array
int findnumberminimum(int a[100],int n)
{
    int min=0;
    for(int i=0;i<n; i++)
    {
        if(a[i]<a[min])
        {
          min=i;
        }
    }
    return min;
}
int main()
{
    int n,a[100];
    cout<<"nhap n";
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cout<<"a["<<i<<"]:=";
        cin >> a[i];
    }
    int min=findnumberminimum(a,n);
    cout<<min;
}
