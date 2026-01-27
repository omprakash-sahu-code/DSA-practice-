#include <iostream>
#include <vector>
using namespace std; 

vector<int> Bubble_sort(vector<int>& arr, int sz){
    for (int i=0 ; i<sz ; i++){
        for (int j=0; j<sz-i-1; j++){
            if (arr[i]>=arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
    return arr;
}

vector<int> Insertion_sort(vector<int>& arr, int sz){
    
    for (int i=1; i<sz; i++){
        int key= arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>key){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=key;
    }

    return arr;
}

vector<int> Selection_sort(vector<int>& arr, int sz){
    for (int i=0; i<sz-1 ;i++){
        int min =i;
        for (int j=i+1; j<sz; j++){
            if(arr[j]<arr[i]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }
    return arr;
}


int main(){
    int sz;
    cout << "Size: ";
    cin >> sz;
    vector<int> arr(sz);
    cout << "Enter elements : ";
    for (int i=0; i<sz; i++){
        cin >> arr[i];
    }

    Insertion_sort(arr,sz);

    for (int val: arr){
        cout << val << " "; 
    }


    return 0;

}