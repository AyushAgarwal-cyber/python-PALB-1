class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string a;
        string b;

        for (char c : s) {
            if (c == '#') {
                if (!a.empty())
                    a.pop_back();
            }
            else {
                a.push_back(c);
            }
        }

        for (char c : t) {
            if (c == '#') {
                if (!b.empty())
                    b.pop_back();
            }
            else {
                b.push_back(c);
            }
        }

        return a == b;
    }
};