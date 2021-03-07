class Solution {
public:
    string reverseStr(string s, int k) {
        int i = 0;
        while(i < s.size()){
            int j = min(i + k,(int)s.size());
            reverse(s.begin()+i,s.begin()+j);
            i += 2*k;
        }
        return s;
    }
};

