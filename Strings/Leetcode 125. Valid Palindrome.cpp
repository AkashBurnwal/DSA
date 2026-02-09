class Solution {
char toLower(char ch){
    if(ch>= 'A' && ch<='Z') return ch - 'A'+'a';
    else return ch;
}
bool isAlphaNum(char ch){
    if((ch>= 'A' && ch<='Z') || (ch>= 'a' && ch<='z') || (ch>= '0' && ch<='9')) return true;
    else return false;
}
public:
    bool isPalindrome(string s)
        {
        // Write your code here.
        int n = s.size();
        int st = 0;
        int e = n-1;
        string result;
    
        while(st < e){
            while(st<e && !isAlphaNum(s[st])){
                st++;
            }
            while(st<e && !isAlphaNum(s[e])){
                e--;
            }
            if(toLower(s[st]) != toLower(s[e])) return false;
        
            st++;
            e--;
        }
        return true;
    }
};
