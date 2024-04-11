class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans ="";
        for(char em:num)
        {
            while(k && ans.size()&& ans.back()> em)
            {
                k--;
                ans.pop_back();
            }
            if( ans.size() || em!='0') ans.push_back(em);
        }
           
           while(ans.size()&& k--) ans.pop_back();
 
 return (ans.size() ==0)? "0":ans;
    }
};