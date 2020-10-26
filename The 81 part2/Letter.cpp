#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
    char s1[205];
    char s2[205];

      gets(s1);
      gets(s2);
    vector<int>v1(33),v2(33),v3(33),v4(33);
    int flag1=0,flag2=0;

    for(int i=0;i<strlen(s1);i++)
    {
        if(s1[i]==' ')
            continue;
        else if(islower(s1[i]))
        {
            v1[s1[i]-'a']++;
        }
        else if(isupper(s1[i]))
        {
            v2[s1[i]-'A']++;
        }
    }

    for(int i=0;i<strlen(s2);i++)
    {
        if(s2[i]==' ')
            continue;
        else if(islower(s2[i]))
        {
            v3[s2[i]-'a']++;
        }
        else if(isupper(s2[i]))
        {
            v4[s2[i]-'A']++;
        }
    }

    for(int i=0;i<33;i++)
    {
        if(v3[i]>v1[i])
            flag1++;
    }

    for(int i=0;i<33;i++)
    {
        if(v4[i]>v2[i])
            flag2++;
    }

    if(flag1||flag2)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}
