#include <iostream>
using namespace std;

int avg(int arr[], int sz){
    int sum=0; float avg;
    for (int i=0; i<sz; i++){
        sum+=arr[i];
    }
    avg= sum/sz;
    for (int i=0; i<sz; i++){
        if(arr[i]>avg){
            return arr[i];
        }
    }

    return -1;
}

int main(){
    int Ip_arr[5]={2,6,8,4,5};
    cout << avg(Ip_arr,5) << endl;
}