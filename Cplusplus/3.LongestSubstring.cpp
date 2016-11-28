class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::set<char> myS;
        int L = 0, i = 0, j = 0;
        int n = s.size();
        while(i < n && j < n){
            if(!myS.count(s[j])){
                myS.insert(s[j++]);
                L = L > (j-i) ? L : (j-i);
            }
            else
                myS.erase(s[i++]);
        }
        return L;
    }
};
