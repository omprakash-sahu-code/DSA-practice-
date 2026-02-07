#include <iostream>
#include <vector>
using namespace std;

int search(vector <int>& nums,int target, int st, int end ){
    int mid=st+(end-st)/2;
    if(nums[mid]==target){
        return mid;
    }else if(nums[mid]>target){
        return search(nums, target, st , mid-1);
    }else{
        return search(nums, target, mid+1, end);
    }
    return -1;
}

int main(){
    vector <int> arr={5,3,1,6,7,9,2,8};
    cout << "INDEX: "<<search(arr, 6, 0, arr.size()-1);
    
    return 0;
}
    