#include<iostream>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0, h=nums.size() - 1;

        while(l<=h){
            int mid = (l+h)/2;

            if(nums[mid] == target)
            return mid;

            else if(nums[mid]<target)
            l = mid+1;

            else
            h = mid-1;
        }
        return l;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 3, 5, 6};
    int target;

    cin >> target;

    cout << sol.searchInsert(nums, target);

    return 0;
}
