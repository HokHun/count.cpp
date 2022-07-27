#include <iostream>
using namespace std;
void nhapmang(){
    int n;
    int arr[100];
    long max;
    cout<< "nhap n :" ;
    cin>>n;
    for(int i=0; i<n;i++)
    {
        int count=0;
        cout<<"arr["<< i <<"] = ";
        cin >> arr[i];
    }
}
int loop(){
        int count=0;
        int number;        
        int n,i;
        int arr[100];
        long max;
        count=0;
        for(int i=0; i<n;i++)
        {
        if(arr[i] %5==0 && arr[i] % 2 !=0){
            count++;
        }
    }
    return count;
}
int main()
{
    int b,n,count=0;
    int arr[100];
    b=0;
    long max;
    nhapmang();
    count=loop();
    cout<<count;
}
