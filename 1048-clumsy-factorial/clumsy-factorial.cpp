class Solution {
public:
    int clumsy(int n) {
        stack<int> st;
        st.push(n);
        int count=0;
        for(int i=n-1;i>0;i--) {
            count=(count+1)%4;
            if(count==2){
                int temp=st.top()/i;
                st.pop();
                 st.push(temp);
                 }
            else if(count==1){
                int temp=st.top()*i;
                st.pop();
                st.push(temp);
                }
            else if(count==0) st.push(-1*i);            
            else if(count==3) st.push(i);          
        }
        int sum=0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};