class Solution {
public:
    bool isPalindrome(string s) {
    string str = "";

    // Sirf letters aur digits lo
    for (char ch : s)
    {
        if (isalnum(ch))
        {
            str += tolower(ch);
        }
    }

    int i = 0;
    int j = str.size() - 1;

    while (i < j)
    {
        if (str[i] != str[j])
        {
            return false;
        }

        i++;
        j--;
    }

    return true;
}
};
