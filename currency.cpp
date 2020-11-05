#include<bits/stdc++.h> 
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds;  
#define ordered_set tree<ll, null_type , less<ll> , rb_tree_tag , tree_order_statistics_Node_update> 
#define ll long long
#define ull unsigned long long
#define pb push_back
#define inf 1e18
#define mk make_pair
#define ld long double
#define mod 998244353 
#define fi first
#define se second
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test ll t; cin>>t; while(t--)
#define setbits __builtin_popcount
#define endl '\n'
#define LOCAL
#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i));}
sim, class b dor(pair < b, c > d) {
    ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
    *this << "[";
    for (auto it = d.b; it != d.e; ++it)
        *this << ", " + 2 * (it == d.b) << *it;
    ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
int main()
{
    fastIO;
    vector<ll>v={10,20,50,100,200,500,1000,2000};
    vector<vector<ll>>dp(9,vector<ll>(2001));
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<2001;j++)
        {
            dp[i][j]=j==0?1:0;
        }
    }
    for(int i=1;i<9;i++)
    {
        for(int j=1;j<2001;j++)
        {
            ll val=j-v[i-1]>=0?dp[i][j-v[i-1]]:0,val1=dp[i-1][j];
            dp[i][j]=val+val1;
        }
    }
    cout<<"Number of different Ways 2000 can be made is equals to ";
    cout<<dp[8][2000]<<endl;
}