#include <iostream>
using namespace std;


int happyNum(int n){
    int rem; int temp=0;
    while (n!=0){
        rem=n%10;
        temp+=rem*rem;
        n=n/10;
    }
    if(temp==1){
        cout<< "It is a Happy Number" << endl;
        return 0;
        
    }
    if(temp>1 && temp<10){
        cout<< "Not a Happy Number"<< endl;
        return 0;
    }
    
    
    return happyNum(temp);
}
int main(){
    happyNum(35);
}