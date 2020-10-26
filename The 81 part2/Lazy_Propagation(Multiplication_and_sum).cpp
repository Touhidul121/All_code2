#include<bits/stdc++.h>

typedef long long ll;

using namespace std;
const int maxN = 100001;
const int mod=1e9+7;
ll ar[maxN];
ll st[4*maxN];
vector<ll>lazy(maxN,1);

void build(int si , int ss , int se)
{
	if(ss == se)
	{
		st[si] = ar[ss];
		return;
	}

	int mid = (ss + se) / 2;

	build(2*si , ss , mid);
	build(2*si+1 , mid+1 , se);

	st[si] = (st[2*si] + st[2*si+1])%mod;
}

ll query(int si , int ss , int se , int qs , int qe)
{
	if(lazy[si] != 1)
	{

        ll r=(lazy[si]*(se-ss+1))%mod;
		st[si] = (st[si]*r)%mod;
		if(ss != se)
		lazy[2*si] =(lazy[2*si]* lazy[si])%mod , lazy[2*si+1] =(lazy[2*si+1]* lazy[si])%mod;
		lazy[si]=1;
	}

	if(ss > qe || se < qs) return 0;

	if(ss >= qs && se <= qe)
	return st[si];

	int mid = (ss + se) / 2;
	return (query(2*si , ss , mid , qs , qe) + query(2*si+1 , mid+1 , se , qs , qe))%mod;
}

void update(int si , int ss , int se , int qs , int qe , int val)
{
	if(lazy[si] != 1)
	{


        ll r=(lazy[si]*(se-ss+1))%mod;
		st[si] = (st[si]*r)%mod;

		if(ss != se)
		lazy[2*si] = (lazy[2*si]*lazy[si])%mod, lazy[2*si+1] = (lazy[2*si+1]*lazy[si])%mod;
		lazy[si]=1;
	}

	if(ss > qe || se < qs) return;

	if(ss >= qs && se <= qe)
	{

		st[si] = (st[si]*val)%mod;

		if(ss != se)
		lazy[2*si] = (lazy[2*si]*val)%mod , lazy[2*si+1] =(lazy[si]* val)%mod;
		return;
	}

	int mid = (ss + se) / 2;
	update(2*si , ss , mid , qs , qe , val);
	update(2*si+1 , mid+1 , se , qs , qe , val);

	st[si] = (st[2*si] + st[2*si+1])%mod;
}


int main()
{
	int n , q , code , l , r , val;
	cin>>n>>q;
	for(int i=1;i<=n;i++)
        ar[i]=1;
	build(1 , 1 , n);

	while(q--)
	{
		cin>>code;
		if(code == 2)
		{
			cin>>l>>r;
			cout<<query(1 , 1 , n , l+1,r)<<endl;
		}
		else
		{
			cin>>l>>r>>val;
			update(1 , 1 , n , l+1 , r , val);
		}
	}
}








