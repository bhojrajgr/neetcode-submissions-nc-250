class Solution {
public:
    void reverseString(vector<char>& s) {
     //Automatic :-  reverse(s.begin(), s.end());
     //Manually
     int left = 0, right = s.size() - 1;
     while(left < right) {
        // swap(s[left], s[right]);
        // Without swap
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
     }
    }
};