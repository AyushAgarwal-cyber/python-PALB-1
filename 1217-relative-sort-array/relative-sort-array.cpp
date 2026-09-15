class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> freq;

        for (int x : arr1)
            freq[x]++;

        vector<int> ans;

        for (int x : arr2) {
            while (freq[x] > 0) {
                ans.push_back(x);
                freq[x]--;
            }
        }

        vector<int> remaining;

        for (auto p : freq) {
            while (p.second > 0) {
                remaining.push_back(p.first);
                p.second--;
            }
        }

        sort(remaining.begin(), remaining.end());

        for (int x : remaining)
            ans.push_back(x);

        return ans;
    }
};