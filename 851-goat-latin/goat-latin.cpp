class Solution {
public:
    string toGoatLatin(string sentence) {
        stringstream ss(sentence);
        string word;
        string ans;
        int count = 1;

        while (ss >> word) {
            char first = word[0];

            if (!(first == 'a' || first == 'e' ||
                  first == 'i' || first == 'o' ||
                  first == 'u' || first == 'A' ||
                  first == 'E' || first == 'I' ||
                  first == 'O' || first == 'U')) {

                word.erase(word.begin());
                word += first;
            }

            word += "ma";

            for (int i = 0; i < count; i++)
                word += 'a';

            if (!ans.empty())
                ans += " ";

            ans += word;
            count++;
        }

        return ans;
    }
};