class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0;
        int i = s.size()-1;
        if(s.size()==1) return 1;
        while(i>=0)
        {
            if(s[i] != ' ')
            {
                cnt++;
                if(i!=0) 
                {
                i--;
                }
                else
                {
                    break;
                }   
                if(s[i] ==' ')
                {
                    break;
                }
            }
            else
            {
                i--;
            }
        }
        return cnt;
    }
};