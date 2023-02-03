#include<iostream>
using namespace std;
int main()
{
    int n;
   cin>>n;
   for(int row=1;row<=5;row++)
    {
        for(int space=1;space<=(5-row);space++){
           cout<<"  ";
        }
        
        for(int col=1;col<=row;col++){
           cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
