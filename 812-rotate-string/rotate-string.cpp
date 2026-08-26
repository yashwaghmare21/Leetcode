class Solution {
public:
    bool rotateString(string s, string goal) {
        // if(s==goal) return true;
        // int count=0;
        // for(int i=0;i<s.size();i++){
        //     if(s[i] == goal[0]){
        //         count=i;
        //         break;
        //     }
        // }
        // for(int i=count;i<s.size();i++){
        //     if(s[i]!=goal[count-i]) return false;
        // }
        // for(int i=0;i<count;i++){
        //     if(s[i]!=goal[count+i]) return false;
        // }
        // return true;
        if(s.size()!=goal.size()) return false;
        bool correct = (s + s).find(goal) != string::npos;
        return correct;
    }
};