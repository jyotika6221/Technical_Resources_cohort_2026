#include <iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    int space=0,star=n;
    for(i=1;i<=n;i++){
        for(j=1;j<=space;j++)
        {
            cout<<"  ";
         }
         for(j=1;j<=star;j++){
            if(i>1 && i<=n/2 && j>1 && j<star){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
         }
         if(i<=n/2){
            space++;
            star-=2;
         }
         else{
            space--;
            star+=2;
         }
         cout<<endl;
    }
}
