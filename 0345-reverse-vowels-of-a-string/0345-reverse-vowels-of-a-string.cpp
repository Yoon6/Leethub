class Solution {
public:
    string reverseVowels(string s) {
        stack<char> st;
        for (auto& c: s)
        {
            if (isVowel(c))
            {
                st.push(c);
            }
        }

        string result = s;
        for (int i = 0; i < s.length(); ++i)
        {
            char c = s[i];
            if (isVowel(c))
            {
                result[i] = st.top();
                st.pop();
            }
        }

        return result;
    }
private:
    bool isVowel(char& c)
    {
        switch(c)
        {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                return true;
            default:
                return false;
        }
    }
};