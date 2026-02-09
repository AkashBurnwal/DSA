class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // return s==t;

        int count[26] = {0};
        for(auto i : s){
            count[i - 'a']++;
        }
        for(auto j : t){
            count[j - 'a']--;
        }
        for(int k: count){
            if(k != 0) return false;
        }
        return true;
    }
};
