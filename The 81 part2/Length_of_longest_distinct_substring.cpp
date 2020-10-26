#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin>>s;
     int ans=0;
        int n=s.size();
        map<char,int>mp;
        int j=0;
        for(int i=0;i<n;i++)
        {

            while(mp[s[j]]<1 && j<n)
            {
                mp[s[j]]++;
                j++;
            }
            ans=max(ans,j-i);
            mp[s[i]]--;
        }
        cout<<ans<<"\n";
}
