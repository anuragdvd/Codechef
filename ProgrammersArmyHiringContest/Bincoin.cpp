/* Problem Link :: https://www.codechef.com/PAHC2020/problems/BINCOIN

Problem Description ::

Chef and Ada have been assigned a task of finding a secret binary code which has been encrypted in a weird manner.

There are N and M coins hidden in the paths followed by Chef and Ada respectively. Each coin has a number written on one side whereas other side contains an alphabet. Chef and Ada start finding the coins from the starting points of their respective paths. In this process they might not be able to find some coins and move ahead.

There is a very rare chance that the all the coins picked and the order of picking them will be similar for Chef and Ada in terms of numbers written on them. Let the most number of coins that these two can possibly pick up and satisfy this rare condition be K. The secret binary code is the binary representation of XOR of ASCII representations of the alphabets written on coins at location K on the paths of Chef and Ada respectively.

Tags :: LCS using DP + bitset

*/

#include<bits/stdc++.h>
#define fr(i,c,b) for(int i=c;i<b;i++)
#define frl(i,c,b) for(ll i=c;i<b;i++)
#define si(x) int x; scanf("%d", &x)
#define sll(x) ll x; scanf("%lld", &x)
#define pi(x) printf("%d", x)
#define pll(x) printf("%lld", x)
#define nl printf("\n")
#define watch(x) cout << (#x) << " is " << (x) << endl
#define MAX 100001
#define M 1000000007
#define pb push_back

typedef long long int ll;

using namespace std;

int main()
{

    si(t);
    
    while(t--)
    {
       si(n); si(m);
       ll a[n]; fr(i,0,n)   cin>>a[i];
       string first; cin>>first;
       ll b[m]; fr(i,0,m)   cin>>b[i];
       string sec; cin>>sec;
       ll dp[n+1][m+1];
       
    
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
              //  watch(j);
                if(i==0||j==0)  dp[i][j]=0;
                else if(a[i-1]==b[j-1])
                    dp[i][j]=dp[i-1][j-1]+1;
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);  
            }
        }
    
        ll mxx=dp[n][m];
        //watch(mxx);
        int ans=(int)first[mxx-1]^(int)sec[mxx-1];
        bitset<32> bt(ans);
        //cout<<bt;
        string ss=bt.to_string();
        bool flag=false;
        for(auto i:ss)
        {
            if(i=='1')
            {
                flag=true;
            }
            if(flag)
                cout<<i;
        }
        cout<<endl;
    
    }
    
}
