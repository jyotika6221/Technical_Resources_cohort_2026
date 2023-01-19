#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, r;
    cout<<"Enter a number";
    cin >> n;
    int counter=1;
    int ans=0;
    
    while(n!=0){
        r=n%10;
        n=n/10;
        ans=ans+counter*pow(10,r-1); 
        counter++;
    }
    cout << ans << endl;
    return 0;
}
