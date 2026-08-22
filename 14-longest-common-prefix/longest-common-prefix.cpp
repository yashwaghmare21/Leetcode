class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result;
        for(int i=0;i<strs[0].size();i++){
            char compare = strs[0][i] ;
            for(int j=1;j<strs.size();j++){
                if(compare != strs[j][i] || i>=strs[j].size()) return result;
            }
            result += compare;
        }
        return result;
    }
};