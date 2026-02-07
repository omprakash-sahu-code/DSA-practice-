#include <iostream>
#include <vector>
using namespace std;

int BruteForce(vector<int>& nums) {
    for (int i = 0; i < nums.size() - 1; i += 2) {
        if (nums[i] != nums[i + 1]) {
            return nums[i];
        }
    }
    return nums.back();
}

int singleNonDuplicate(vector<int>& nums) {
    int st = 0, end = nums.size() - 1, mid;
    if (nums.size() == 1)
        return nums[0];
    else if (nums[st] != nums[st + 1])
        return nums[st];
    else if (nums[end] != nums[end - 1])
        return nums[end];
    else {
        while (st <= end) {
            mid = st + (end - st) / 2;
            if (nums[mid] != nums[mid + 1] && nums[mid] != nums[mid - 1]) {
                return nums[mid];
            }
            if (mid % 2 == 0) {
                if (nums[mid] == nums[mid - 1]) {
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }
            } else {
                if (nums[mid] == nums[mid - 1]) {
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {3, 3, 7, 7, 10, 11, 11};
    cout << "INDEX: " << BruteForce(arr);

    return 0;
}