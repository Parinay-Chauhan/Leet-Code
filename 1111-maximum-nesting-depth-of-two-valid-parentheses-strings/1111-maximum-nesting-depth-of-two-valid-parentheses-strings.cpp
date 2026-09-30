class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int cur = 0;
        vector<int> res(seq.length());

        for( int i = 0; i < seq.length(); i++){
            char c = seq[i];
            if(c == '('){
                cur++;
                res[i] = cur % 2;
            } else {
                res[i] = cur % 2;
                cur--;
            }
        }
        return res;
    }
};
