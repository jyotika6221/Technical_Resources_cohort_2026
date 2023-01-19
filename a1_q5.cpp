#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    cout<<"Total number of digits are "<<count;
    return 0;
}
