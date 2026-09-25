#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

void count(int n){
    if(n==0) return;
    count(n-1);
    cout<< n << endl;
    
}

int factorial(int n){
    if(n==0) return 1;
    return n*factorial(n-1);
}

int fibonacci( int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int sumodDigits(int n){
    if(n==0){
        return 0;
    }

    return n%10 + sumodDigits(n/10);
}


int reverse( int n, int num){
    if(n==0) return num;
    num= num*10 + n%10;
    return reverse(n/10, num);
    
}

bool isPalindrome(int n){
    if(n==reverse(n,0)){
        return true;
    }
    return false;
}

void print(vector<int> &arr, int n, int i){
    if(i==n-1) return ;
    cout<< arr[i] << ",";
    print(arr, n, i+1);

}


int main(){
    vector<int> arr={1,2,3,4,5};
    int n = arr.size();
    print(arr,n , 0);
    return 0;
}