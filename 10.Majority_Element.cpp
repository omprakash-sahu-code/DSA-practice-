#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majority(vector <int> arr){  //O(nlogn + n)
    int sz=arr.size();
    int target=sz/2;
    sort(arr.begin(), arr.end());
    int count=1;
    for (int i=1; i<sz; i++){
        if(arr[i]==arr[i-1]){
            count++;
        }else{
            count=1;
        }
        if(count > target){
            return arr[i];
        }
    }
    return -1;

}

int Moores_algorithm(vector <int> nums){ //O(n)
    int sz=nums.size();
    int target= sz/2;
    int freq=1;
    int ans= nums[0];
    for(int i=0; i<sz; i++){
        if(freq==1){ 
            ans=nums[i];
        }
        if(ans==nums[i]) freq++;
        else freq--;
    }
    return ans;

}


int main (){
    vector <int> arr={1,1,1,1,2,2,2};
    int ans= Moores_algorithm(arr);
    cout << "Answer: " << ans;   

    return 0;
}
