#include<iostream>
using namespace std;
int main()
{
    int n,rev=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    while(n!=0)
    {
        rev=(rev*10)+n%10;
        n=n/10;
    }
    cout<<"Reverse of the number is "<<rev<<endl;
    return 0;
}
