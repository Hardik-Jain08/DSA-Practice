class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return 0;
        vector<int> vec1(26,0);
        vector<int> vec2(26,0);
        int window = s1.size();
        for(int i = 0; i < window; i++){
            vec1[s1[i] - 'a']++;
            vec2[s2[i] - 'a']++;
        }
        int i = 0, j = window - 1;
        int n = s2.size() - 1;
        while(j < n){
            if(vec2 == vec1){
                return 1;
            }
            vec2[s2[i] - 'a']--;
            i++;
            j++;
            vec2[s2[j] - 'a']++;
        }
        if(vec2 == vec1){
                return 1;
        }
        return 0;
    }
};