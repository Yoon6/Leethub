class Solution {
public:
    string reverseWords(string s) {
        string trimedStr = trim(s);
        vector<string> splittedStr = split(trimedStr);
        string result;
        for (int i = splittedStr.size() - 1; i >= 0; --i)
        {
            result += splittedStr[i];
            if (i != 0)
            {
                result += ' ';
            }
        }
        return result;
    }

private:
    string trim(string& s)
    {
        string result = s;
        while (s.front() == ' ')
        {
            s.erase(0, 1);
        }
        while (s.back() == ' ')
        {
            s.pop_back();
        }

        return s;
    }

    vector<string> split(string& s)
    {
        vector<string> result;
        string temp;
        s += ' ';
        for (char& c : s)
        {
            if (c == ' ' && temp.length() != 0)
            {
                result.push_back(temp);
                temp.clear();
            }
            else if (c != ' ')
            {
                temp += c;
            }
        }

        return result;
    }
};