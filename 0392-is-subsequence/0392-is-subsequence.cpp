class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.length() > t.length())
        {
            return false;
        }

        int len = s.length();
        vector<bool> arrExist(len);
        int idx = 0;
        for (auto& c : t)
        {
            if (c == s[idx])
            {
                arrExist[idx] = true;
                idx++;
            }
        }

        bool result = true;
        for (auto exist : arrExist)
        {
            result = result && exist;
        }

        return result;
    }
};