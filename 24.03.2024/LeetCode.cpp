class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int a = -1;
     for(int i = 1;i<nums.size();i++)
        {
            if(nums[i] == nums[i-1])
             {
                a = nums[i];
                break;
             } 
        }
        return a;
    }
};


