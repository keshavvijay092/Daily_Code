lass Solution{
public:
    stack<int> insertAtBottom(stack<int> st,int x){
       stack<int> qt;
     while(!st.empty())
     {
        qt.push(st.top());
        st.pop();
     }
     st.push(x);
     while(!qt.empty())
     {
         st.push(qt.top());
        qt.pop();
     }
       
        return st;
    }
};