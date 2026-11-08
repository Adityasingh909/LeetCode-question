class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>>ans;

        for(int i=0;i<s1.size();i++){
            vector<string>st;
            string a="";
            string b="";
            while(s1[i]!=s2[i]){
                a+=s1[i];
                b+=s2[i];
                i++;
            }
            if(a.size()!=0){

                st.push_back(a);
                st.push_back(b);
            }
                if(st.size()!=0){

            ans.push_back(st);
                }
        }
        return ans;
    }
};