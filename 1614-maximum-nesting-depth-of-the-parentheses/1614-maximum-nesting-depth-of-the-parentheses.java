class Solution {
    public int maxDepth(String s) {
        Stack<Integer>st = new Stack<>();
        int res = 0;
        for(int i = 0; i < s.length(); i++){
            char c = s.charAt(i);

            if(c == '('){
                st.push(i);
            } else if( c == ')' ){
                if( st.size() > 0){
                    st.pop();
                }
            }
            res = Math.max(res, st.size());
        }
        return res;
    }
}