class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        unordered_map<int, int> cnt;
        int sum = 0;
        int count = 0;

        for (int i = 0; i < n; i++) {
            sum += nums[i];
            if (sum == goal) {
                count++;
            }
            if (cnt.count(sum - goal)) {
                count += cnt[sum - goal];
            }
           cnt[sum]++;
        }

        return count;
    }
};


  