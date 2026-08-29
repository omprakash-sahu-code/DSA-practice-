#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

//Sieve of Eratothenes approach
//Sieve = filtering process
//Eratothenes = Name of the Mathematician

int countPrimes(int n){
    int count=0;
    vector<bool> isPrime(n,true); 

    for(int i=2; i<n; i++){
        if(isPrime[i]){
            count++;
            for(int j=i*2; j<n; j=j+i){
                isPrime[j]=false;
            }
        }
    }

    for(int i=2; i<n; i++){
        if(isPrime[i]){
            cout<< i << " ," ;
        }
    }

    cout<< endl;
    cout<< "Total: ";
    return count;

}

int main(){
    cout << countPrimes(50);
    return 0;
}