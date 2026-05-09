class Solution {
public:
    bool isAnagram(string s, string t) {
        int l1 = s.length();
        int l2 = t.length();
        if(l1 != l2) return false;
        
        unordered_map<char, int> freq;
        for(char c : s) freq[c]++;
        for(char c : t) {
            if(--freq[c] < 0) return false;
        }
        return true;
    }
};
