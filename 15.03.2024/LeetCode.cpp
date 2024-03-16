class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n, 1);
        
        // Calculate the product of all elements to the left
        for (int i = 1; i < n; i++) {
            arr[i] = arr[i - 1] * nums[i - 1];
        }
        
        // Calculate the product of all elements to the right
        int R = 1;
        for (int i = n - 2; i >= 0; i--) {
            R *= nums[i + 1];
            arr[i] *= R;
        }
        
        return arr;
    }
};
