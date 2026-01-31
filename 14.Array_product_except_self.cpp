#include <iostream>
#include <vector>
using namespace std;

vector <int> Bruteforce_product(vector<int>& nums) { // O(n2)
    int n=nums.size();  
    vector <int> answer(n);
    for (int i = 0; i < n; i++){
        int ans=1;
        for (int j = 0; j < n; j++){
            if (j!=i){
                ans*=nums[j];
            }
        }
        answer[i]=ans;  
    }
    return answer;
    
        
}

vector <int> product(vector<int>& nums) { // TC=O(n) , SC=O(n)
    int n=nums.size();
    vector <int> answer(n),prefix(n,1),suffix(n,1);

    for (int i = 1; i < n; i++){
        prefix[i]=prefix[i-1]*nums[i-1];
    }

    for (int i = n-2; i >=0; i--){
        suffix[i]=suffix[i+1]*nums[i+1];
    }

    for (int i = 0; i < n; i++){
        answer[i]=prefix[i]*suffix[i];
    }

    return answer;        
}

vector<int> product2(vector<int>& nums) { //TC= O(n), SC=O(1) 
        int n = nums.size();
        vector<int> answer(n,1);

        for (int i = 1; i < n; i++) {
            answer[i] = answer[i - 1] * nums[i - 1];
        }

        int suffix=1;
        for (int i = n - 2; i >= 0; i--) {
            suffix *= nums[i + 1];
            answer[i] *= suffix;
        }

        return answer;
}


int main(){
    vector<int> arr={1,2,3,4};
    for (int x: product(arr)){
        cout<< x << "\t";

    }
    return 0;
}