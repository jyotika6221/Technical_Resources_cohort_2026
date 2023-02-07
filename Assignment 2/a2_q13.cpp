#include<iostream>
using namespace std;
int main(){
    int n,i,j,num,sum;
    cin>>n;
    cout<<endl;
    for(i=0;i<=n;i++){
        num=1;
        for(j=0;j<=i;j++)
        {
            cout<<num<<"\t";
            sum=(num*(i-j))/(j+1);
            num=sum;
        }
        cout<<"\n";
    }
    return 0;
}
