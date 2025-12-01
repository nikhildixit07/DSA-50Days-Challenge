// Length of Last Word (#58)

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int length = 0;
        bool counting = false;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                counting = true;
                length++;
            } else if (counting) {
                break;
            }
        }
        return length;
    }
};
