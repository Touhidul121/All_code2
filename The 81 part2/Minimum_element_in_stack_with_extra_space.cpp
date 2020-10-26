#include<bits/stdc++.h>
using namespace std;

stack<int>s,ss;
void push(int a)
{
    s.push(a);
    if(ss.size()==0 || a<=ss.top()) //always write a<=ss.top(), don't try to write a<ss.top() ,then it will provide wrong answer
        {
        ss.push(a);return;
        }

}

int pop()
{
    if(s.size()==0)return -1;
    int ans=s.top();
    s.pop();

    if(ss.top()==ans)ss.pop();
}

int getmin()
{
    if(ss.size()==0)return -1;

    return ss.top();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    push(18);
    push(23);
    push(29);
    push(15);
    push(15);

    cout<<getmin()<<"\n";

    pop();

    cout<<getmin()<<"\n";

    pop();
    pop();

    cout<<getmin()<<"\n";


}

