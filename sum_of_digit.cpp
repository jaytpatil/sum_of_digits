#include<iostream>
using namespace std;
int main(){
    int n,m,sum=0;
    cout<<"enter number: ";
    cin>>n;
    while (n>0)
    {
        m=n%10;
         sum=sum+m;
        n=n/10;
    }
    cout<<"sum is "<<sum<<endl;


    return 0;
}