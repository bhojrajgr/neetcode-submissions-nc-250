#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned;
        for (char c : s) {
            if (isalnum(c)) {                // keep only letters and digits
                cleaned.push_back(tolower(c)); // normalize to lowercase
            }
        }
        
        int i = 0, j = cleaned.size() - 1;
        while (i < j) {
            if (cleaned[i] != cleaned[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};

// class Solution {
// public:
//     bool isPalindrome(string s) {
//         int i = 0, j = s.size() - 1;
//         while (i < j) {
//             if (s[i] != s[j]) return false;
//             i++;
//             j--;
//         }
//         return true;
//     }
// };