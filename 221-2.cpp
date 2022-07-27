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
int loop1(){
        int count1=0;
        int number;        
        int n,i;
        int arr[100];
        long max;
        count1=0;
        for(int i=0; i<n;i++)
        {
        if(arr[i] % 2==0&& arr[i]>0){
            count1++;
        }
    }
    return count1;
}
int loop2(){
    int count2=0;
    int n,i;
    int arr[100];
    count2=0;
    for(int i=0; i<n;i++){
        if(arr[i] % 1==0&& arr[i]>0||arr[i] % 3==0||arr[i] % 5==0||arr[i] % 7==0){
            count2++;
            
    }
}
    return count2;
}
int main()
{
    int b,n,count1=0,count2=0;
    int arr[100];
    long max;
    nhapmang();
    count1=loop1();
    count2=loop2();
    cout<<"so chan la :"<<count1<< endl;
    cout<<"so le la :"<<count2<< endl;
    if(count1>count2){
        cout<< "so chan nhieu hon so le :-1\n";
    }
    else 
    {
        cout<< "so le nhieu hon so chan :1\n";
    }
}
