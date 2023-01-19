#include<iostream>
using namespace std;
int main()
{
  
    int num1,num2,gcd=1,lcm=1;
    cout<<"enter two numbers:";
    cin>>num1>>num2;
    int max=num1;
    if(num2>max){
        max=num2;

    }
    
    for(int i=1;i<max;i++){
        if(num1%i==0 && num2%i==0){
            gcd=i;

        }


    }
    lcm=num1*num2/gcd;
    cout<<"gcd of a and b is:"<<gcd<<endl;
    cout<<"lcm of a and b is:"<<lcm;
return 0;

}
