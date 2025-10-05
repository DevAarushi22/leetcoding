class Solution {
public:
    string cleanstring(const string input){
        string result;
        for(char ch: input){
            if(isalnum(ch))
                result += tolower(ch);
        }
        return result;
    }
    bool isPalindrome(string s) {
        if (s.empty()) return true;

            string s1 = cleanstring(s);
            string rev = s1;
            reverse(rev.begin(), rev.end());

            return s1 == rev;
            
    }
};