class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //1. sort all list strings 
        //2. if string not in unique_anagrams, append to unique_anagrams the sorted string and the original string; {aet: [eat, tea, ate], ant: [tan, nat]}
        //3. if string in unique_anagrams: append index to the value list
        //4. append map values to a new list and return.
        
        unordered_map<string, vector<string>> umap;
        
        for(string s : strs) {
            string t = s;
            sort(t.begin(), t.end());
            umap[t].push_back(s);
        }
        
        vector<vector<string>> anagrams;
        
        for (auto p : umap) {
            anagrams.push_back(p.second);
        }
        
        return anagrams;
    }
};
