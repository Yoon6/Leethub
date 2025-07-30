class Solution {
public:
    int compress(vector<char>& chars) {
        if (chars.size() == 1)
            return 1;
        
        string result;
        char before = chars[0];
        int count = 1;
        for (int i = 1; i < chars.size(); ++i)
        {
            char cur = chars[i];
            if (before == cur)
            {
                count++;
            }
            else
            {
                result += before;
                if (count > 1)
                    result += to_string(count);
                count = 1;
            }
            before = cur;
        }
        result += before;
        if (count > 1)
            result += to_string(count);
        
        // cout <<result;
        chars.clear();
        for (auto& c : result)
        {
            chars.push_back(c);
        }

        
        return result.length();
    }
};