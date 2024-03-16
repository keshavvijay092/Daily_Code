class Solution {
public:
    int findMaxLength(vector<int>& nums) {
       unordered_map<int, int> map;
        map[0] = -1;
        int sum = 0;
        int ans = 0; 
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                sum += -1;
            } else {
                sum += 1;
            }
            if(map.find(sum) != map.end()) {
                int len = i - map[sum];
                ans = max(ans, len);
            } else {
                map[sum] = i;
            }
        }
        return ans;
    }
};

// class Solution {
// public:
   
// // class Solution {
// // public:
// //     int find(vector <int> & nums,int i)
// //      {
// //          int cnt1=0;
// //             int cnt2=0;
// //         while(i<nums.size())
// //         { 
// //             if(nums[i]== 0)
// //             {
// //                 cnt1++;
// //                 i++;
// //             }
// //             else if (nums[i] == 1)
// //             {
// //                 cnt2++;
// //                 i++;
// //             }
// //           else{
// //             i++;
// //           }
          
// //         }
// //         while(cnt1 !=cnt2)
// //         {
// //             if(cnt1 >cnt2)
// //             {
// //                 cnt1--;
// //             }
// //             else if(cnt2>cnt1)
// //             {
// //                 cnt2--;
// //             }
// //             else
// //             {
// //                 cnt2--;
// //                 cnt1--;
// //             }
// //         }
    
// //         return cnt1+cnt2;
// //     }
// //     int findMaxLength(vector<int>& nums) {
// //        int i=0;
// //       int cnt=find(nums,i);
// //       return cnt;        
// //     }
// // };