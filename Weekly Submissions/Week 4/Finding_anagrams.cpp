class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = p.size();
        int m = s.size();
        int i = n;
        vector<int> v;
        unordered_map<char,int> mp;
        unordered_map<char, int> st;
        while(i--){
            st[p[i]]++;
            mp[s[i]]++;
        }
        i=0;
        int j = n;
        while(j<m){
            if(mp == st) v.push_back(i);
            mp[s[i++]]--;
            if(mp[s[i-1]]==0) mp.erase(s[i-1]);
            mp[s[j++]]++;
        }
        if(mp == st) v.push_back(i);
       
        return v;
    }
};
