class Solution {
public:
    bool detectCapitalUse(string word) {
        int upper = 0;

        for (char c : word) {
            if (isupper(c))
                upper++;
        }

        return upper == 0 ||
               upper == word.size() ||
               (upper == 1 && isupper(word[0]));
    }
};