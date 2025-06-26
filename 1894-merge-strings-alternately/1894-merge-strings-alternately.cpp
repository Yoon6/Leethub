#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int minLength = min(word1.length(), word2.length());

        for (int i = 0; i < minLength; i++)
        {
            result += word1[i];
            result += word2[i];
        }

        if (word1.length() > minLength)
        {
            for (int i = minLength; i < word1.length(); i++)
            {
                result += word1[i];
            }
        }
        else if (word2.length() > minLength)
        {
            for (int i = minLength; i < word2.length(); i++)
            {
                result += word2[i];
            }
        }
        return result;
    }
};