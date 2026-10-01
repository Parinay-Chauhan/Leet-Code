class Solution {
public:
    int maxDepth(string s) {
        stack<int> st;
        int res = 0;
        for(size_t i = 0; i < s.length(); i++){
            char c = s[i];

            if(c == '('){
                st.push(i);
            } else if( c == ')' ){
                if( !st.empty()){
                    st.pop();
                }
            }
            res = std::max(res, static_cast<int>(st.size()));
        }
        return res;
    }
};