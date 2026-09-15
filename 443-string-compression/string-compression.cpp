class Solution {
public:
    int compress(vector<char>& chars) {
        int write = 0;
        int i = 0;

        while (i < chars.size()) {
            char current = chars[i];
            int count = 0;

            while (i < chars.size() && chars[i] == current) {
                i++;
                count++;
            }

            chars[write++] = current;

            if (count > 1) {
                string num = to_string(count);

                for (char c : num)
                    chars[write++] = c;
            }
        }

        return write;
    }
};