class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int n = s1.size();
        int m = s2.size();

        if (n > m)
            return false;

        for(int i = 0; i <= m - n; i++)
        {
            int freq1[26] = {0};
            int freq2[26] = {0};

            for(int j = 0; j < n; j++)
                freq1[s1[j] - 'a']++;

            for(int j = 0; j < n; j++)
                freq2[s2[i + j] - 'a']++;

            bool same = true;

            for(int k = 0; k < 26; k++)
            {
                if(freq1[k] != freq2[k])
                {
                    same = false;
                    break;
                }
            }

            if(same)
                return true;
        }

        return false;
    }
};