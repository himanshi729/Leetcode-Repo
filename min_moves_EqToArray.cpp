class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int Min_count = 0;

        int MaxElement = nums[0];
        for(int i=0; i<n; i++){
            if(nums[i]>MaxElement)
            MaxElement = nums[i];
        }

        for(int i=0; i<n; i++){
            if(nums[i] != MaxElement){
                Min_count += MaxElement - nums[i];
            }
        }
        return Min_count;
    }
};
