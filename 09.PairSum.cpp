#include <iostream>
#include <vector>
using namespace std;

vector<int> pair_sum(vector <int> arr, int target){
    int sz= arr.size();
    vector<int> pair;
    int start=0 , end= sz-1;
    while (start <= end){
        int sum= arr[start] +arr[end];
        if(sum < target){
            start++;
        }else if( sum > target){
            end--;
        }else {
            pair.push_back(arr[start]);
            pair.push_back(arr[end]);
            return pair;
        }
        
    }
    return pair;

}

int main (){
    vector <int> arr={2,7,11,15};
    int target=26;
    vector <int> ans= pair_sum(arr,target);
    cout << "Pair: (" << ans[0]<< ","<< ans[1] << ")";   

    return 0;
}
