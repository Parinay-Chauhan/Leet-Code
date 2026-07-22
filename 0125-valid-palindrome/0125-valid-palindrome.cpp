class Solution {
public:
    bool isPalindrome(string s) {
    string temp;

    for (int i = 0; i < s.size(); i++)
    {
        if (isalnum(s[i]))
        {
            temp.push_back(tolower(s[i]));
        }
    }

    int start = 0;
    int end = temp.size() - 1;

    while (start < end)
    {
        if (temp[start] != temp[end])
        {
            return false;
        }

        start++;
        end--;
    }

    return true;
}
};
