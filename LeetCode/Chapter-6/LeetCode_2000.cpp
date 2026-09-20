class Solution {
public:
    string reversePrefix(string word, char ch) {
        int end = 0;
        while (end < word.length() && word[end] != ch) {
            end++;
        }
        if (end < word.length()) {
            int start = 0;
            while (start < end) {
                std::swap(word[start], word[end]);
                start++;
                end--;
            }
        }
        
        return word;
    }
};
