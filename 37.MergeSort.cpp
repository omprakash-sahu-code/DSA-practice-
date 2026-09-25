#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

void MergeArray(vector<int> &arr, int low, int mid, int high){
    vector<int> ans;
    int i=low, j=mid+1;

    while(i<=mid && j<=high){
        if(arr[i]<arr[j]) ans.push_back(arr[i++]);
        else ans.push_back(arr[j++]);
    }

    while(j<=high) ans.push_back(arr[j++]);
    while(i<=mid) ans.push_back(arr[i++]);

    for(int k=0; k<ans.size(); k++){
        arr[low+k]=ans[k];
    }

    return;
}

void MergeSort(vector<int> &nums, int low, int high){
    if(low>=high) return;
    int mid= low + (high - low)/2;
    MergeSort(nums, low, mid); 
    MergeSort(nums, mid+1, high);

    
    MergeArray(nums, low, mid, high);

    return;

}

int main(){
    vector <int> arr={2,6,4,3,11,8,7,9};
    int st=0, end=arr.size()-1;
    MergeSort(arr, st, end);

    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " " ;
    }
    return 0;
}