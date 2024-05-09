class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n = words.size();
        int freq[26];
        memset(freq, 0, sizeof(freq));
        for (string& word : words) {
            for (char& c : word) {
                freq[c-'a']++;
            }
        }
        for (int i = 0; i < 26; i++) {
            if (freq[i] % n != 0) {
                return false;
            }
        }
        return true;
    }
};
