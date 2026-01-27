#include <iostream>
#include <vector>
using namespace std;

void print_subarray(int arr[], int sz){
    for (int start=0 ; start<sz; start++){
        for (int end= start; end <sz; end++ ){
            for (int i=start; i<=end; i++){
                cout << arr[i] ;
            }
            cout << " ";
        }

    }

}

int main (){
    int arr[5]={1,2,3,4,5};
    print_subarray(arr,5);





    return 0;
}
