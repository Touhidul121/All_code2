class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        if(s.size()==0)
            return "";
        int j=0;
        bool f=false;
        int mn=INT_MAX;
        for(int i=0;i<s.size();i++)
        {
            int x=s[i].size();
            mn=std::min(mn,x);
        }

        while(!f && j<mn){
            char prev=s[0][j];
            for(int k=1;k<s.size();k++)
            {
              if(s[k][j]!=prev)
              {
                  f=true;
                  break;
              }
            }
            if(f)break;
            j++;
        }
        string x="";
        string r=s[0];
        x=r.substr(0,j);
        return x;
    }
};
