#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;
    int stars = 1;
    int space = n / 2;
    int val1 = 1;
    for (int i = 1; i <= n; i++){
        int val = val1;
        for (int j = 1; j <= space; j++){
            cout << "\t";
        }
        for (int j = 1; j <= stars; j++){
            cout << val << "\t";
            if (j <= stars / 2){
                val++;
            }
          else{
                val--;
            }
        }

        cout << endl;
        
        if (i <= n / 2){
            val1++;
            stars += 2;
            space--;
        }else{
            val1--;
            stars -= 2;
            space++;
        }
    }
}
