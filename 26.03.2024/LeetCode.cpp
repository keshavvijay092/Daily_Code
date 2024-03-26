class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int a = 1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] <= 0) {
                continue;
            }
            if (a < nums[i]) {
                return a;
                
            }
            if (a == nums[i]) {
                a++;
            }
        }
        return a;
    }
        
    
};