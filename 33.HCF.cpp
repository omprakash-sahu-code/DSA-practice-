#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int bruteforce(int a, int b){
    int hcf=0;
    if (a==0) return b;
    if (b==0) return a;
    if (a==b) return a;

    for (int i=1; i<=min(a,b); i++){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }
    return hcf;
}

//Euclid's Algorithm

int main(){
    int a=20, b=24;
    cout << bruteforce(a,b);
    return 0;
}