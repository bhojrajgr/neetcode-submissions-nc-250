        // Using a map
        class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> count1;
        for (char c : s1) {
            count1[c]++;
        }

        int need = count1.size();
        for (int i = 0; i < s2.length(); i++) {
            unordered_map<char, int> count2;
            int cur = 0;
            for (int j = i; j < s2.length(); j++) {
                char c = s2[j];
                count2[c]++;

                if (count1[c] < count2[c]) {
                    break;
                }

                if (count1[c] == count2[c]) {
                    cur++;
                }

                if (cur == need) {
                    return true;
                }
            }
        }
        return false;
    }
};
// class Solution {
// public:
//     bool checkInclusion(std::string s1, std::string s2) {
       
        //Brute-Force
        // sort(s1.begin(), s1.end());

        // for (int i = 0; i < s2.length(); i++) {
        //     for (int j = i; j < s2.length(); j++) {
        //         string subStr = s2.substr(i, j - i + 1);
        //         sort(subStr.begin(), subStr.end());

        //         if (subStr == s1) {
        //             return true;
        //         }
        //     }
        // }
        // return false;
//     }
// };