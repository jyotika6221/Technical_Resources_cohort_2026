#include <iostream>
using namespace std;
int main()
{
    int low,high,i;
    cout<<"Enter the lower range of number"<<endl;
    cin>>low;
    cout<<"Enter the upper range of number"<<endl;
    cin>>high;
    for (int i=low;i<=high;i++)
    {
        if(i%2!=0)
       cout<<i<<endl;
    }
return 0;
}
