#include <iostream>
using namespace std;


//Brute force approach
int factorial(int n){
    int ans=1;
    for (int i=1; i<=n; i++){
        ans=ans*i;
    }
    return ans;
}
int strongNum(int n){
    int temp=n; int rem=0; int sum=0; int product=1;
    while(n!=0){
        rem=n%10;
        sum+=factorial(rem);
        n/=10;
    }
    
    if (sum==temp) cout << temp << " is a strong number" <<endl;
    else cout << "Not a strong number" << endl;    
    
    return 0;
}

int main(){
    strongNum(145);
    return 0;
}
