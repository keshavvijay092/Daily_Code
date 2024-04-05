class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for(char ct:s)
        {
            if( !st.empty() && abs(st.top() - ct) == 32)
          {
            st.pop();
          }
          else 
          {
            st.push(ct);
          }
        }
        string ans;
        while(!st.empty())
        {
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};