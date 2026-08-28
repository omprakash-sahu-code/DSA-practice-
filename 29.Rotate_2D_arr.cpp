#include <iostream>
#include <vector>
#include <algorithm>
#include <string> 
using namespace std;

int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int m=3,n=3;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
    
    cout << "-------Transpose--------";
    for (int i = 0; i<n ; i++){
        for(int j = 0; j<n; j++){
            cout <<  arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}