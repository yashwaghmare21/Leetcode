class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        string ans="";
        string temp="";
        for(char c : s){
            if(c!=' '){
                temp+=c;
            }else{
                if(temp.size() > 0){
                    st.push(temp);
                    temp="";
                }
            }
        }
            if(temp.size()>0) st.push(temp);
            while(!st.empty()){
                ans+=st.top();
                st.pop();
                if(!st.empty()){
                    ans += " ";
                }
            }
        return ans;
    }
};