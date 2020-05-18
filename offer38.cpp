
class Solution {
public:
    vector<string> permutation(string s) {
        vector<string> ans;
        if (s.size()==0) return ans;

        string path;
        vector<bool> used;
        used.assign(s.size(), false);

        sort(s.begin(), s.end());
        permutationCore(ans, path, used, s);

        return ans;
    }
    void permutationCore(vector<string> &ans, string &path, vector<bool> &used, const string &s)
    {
        if (path.size()==s.size()) {
            ans.push_back(path);
            return;
        }

        for (int i=0; i<s.size(); i++) {
            
            if (i>0 && s[i]==s[i-1] && used[i-1]==false) {
                continue;
            }
            
            
            if (used[i]==false) {
                used[i]=true;
                path=path+s[i];

                permutationCore(ans, path, used, s);

                path.pop_back();
                used[i]=false;
            }
        }
    }
};
