#include <iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter the count of number to be tested"<<endl;
    cin >> t;
        for(int i=1;i<=t;i++){
            int n;
            int count=0;
            cout<<"Enter the number to be tested"<<endl;
            cin>>n;
            if(n==2 || n==3){
                cout<<"prime";
            }
            else{
                for(int j=2;j<=abs(n/2);j++){
                    if(n%j==0){
                        count+=1;
                        break;
                    }
                    else{
                        continue;
                    }
                }
                if(count==1){
                    cout<<"not prime \n";
                }
                else if(count==0){
                    cout<<"prime \n";
                }
            }
        }
}
