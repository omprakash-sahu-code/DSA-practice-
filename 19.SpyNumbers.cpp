#include <iostream>
using namespace std;

int spyNum(int n){
    int temp=n; int rem=0; int sum=0; int product=1;
    while(n!=0){
        rem=n%10;
        sum+=rem;
        product*=rem;
        n/=10;
    }
    if (sum==product) cout << temp << " is a spy number"<< endl;
    else cout<< "Not a spynumber." << endl;
    
    
    return 0;
}

int main(){
    spyNum(112234);
    return 0;
}
