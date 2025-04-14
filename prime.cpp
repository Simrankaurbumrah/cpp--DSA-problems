#include <iostream>

using namespace std;
// check if a number is prime or not

int main(){
    int n=45;
    int ct=0;
    for (int i=1;i*i<=n;i++){
        if (n%i==0){
            ct++;
            if ((n/i) !=i){
                ct++;
            }
        }
    }
    if (ct==2) cout << "true";
    else cout << "False";
}

 