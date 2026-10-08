class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int depth = 0;
        for (char c : s) {
            if (c == '(') {
                if (depth > 0) res += c;  
                depth++;
            } else {
                depth--;
                if (depth > 0) res += c; 
            }
        }
        return res;
    }
};