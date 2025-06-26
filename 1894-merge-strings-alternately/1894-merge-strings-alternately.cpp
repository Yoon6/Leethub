#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        stringstream result;
        int minLength = min(word1.length(), word2.length());

        for (int i = 0; i < minLength; i++)
        {
            result << word1[i];
            result << word2[i];
        }

        result << word1.substr(minLength);
        result << word2.substr(minLength);
        return result.str();
    }
};