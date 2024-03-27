class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int cnt = 0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            long long int ans = 1;
            for(int j=i;j<n;j++)
            {
                ans=  ans*nums[j];
                if(ans<k)
                {
                    cnt++;
                }
                else
                {
                    break;
                }
            }
        }
        return cnt;
    }
};