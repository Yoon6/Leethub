#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string x;
        int minLength = min(str1.length(), str2.length());

        string tempX;
        for (int i = 0; i < minLength; i++)
        {
            tempX += str1[i];
            if (canDivide(str1, tempX) && canDivide(str2, tempX))
            {
                x = tempX;
            }
        }

        return x;
    }
private:
    bool canDivide(string str, string divider)
    {
        int step = divider.length();
        int strLen = str.length();

        if (strLen % step != 0)
        {
            return false;
        }

        for (int i = 0; i < strLen; i += step)
        {
            if (str.substr(i, step) != divider)
            {
                return false;
            }
        }
        return true;
    }
};