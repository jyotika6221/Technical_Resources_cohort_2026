#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int space=n/2;
    int star=1;
 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=space;j++){
            cout<<"\t";
        }
        for(int k=1;k<=star;k++){
            if(k==1 || k==star){
                cout<<"*";
            }
            cout<<"\t";
        }
        if(i<=n/2){
            space-=1;
            star+=2;
        }
        else{
            space+=1;
            star-=2;
        }
        cout<<endl;
    }
    return 0;

}
