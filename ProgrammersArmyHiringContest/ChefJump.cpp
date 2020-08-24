/*  Problem Link:: https://www.codechef.com/PAHC2020/problems/CHEFJUMP

Problem  ::

Chef is stuck on the minute hand of a giant clock. To escape from this clock he needs to get onto the hour hand which has an exit door.
Since the minute hand and and hour hand are not connected at any point, chef will surely need to make a jump. Since he wants minimum risks, he chooses to jump on the hour hand so that the angle he has to cover is minimum possible.
You will be given a clock time in UTC format denoting time of chef's jump and you have to compute the minimum angle that chef needs to cover while completing the jump. For some reason chef times his jump only when the number of minutes is a multiple of 5.

Tags : Implementation 

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
        string s; cin>>s;
        int hour=(s[0]-'0')*10+(s[1]-'0');
        int min=(s[3]-'0')*10+(s[4]-'0');
       // watch(hour); watch(min); 
        if(hour>12) hour-=12;
        if(hour==12)    hour=0;
        if (min == 60)
	    {
	        min = 0;
	        hour += 1;
	        if(hour>12)
		    hour = hour-12;
	    } 
	    float ha = 0.5 * (hour * 60 + min); 
	    float ma = 6 * min; 
	    float ans = abs(ha - ma); 
	    if(360-ans<ans) ans=360-ans;
        cout<<ans<<" degree"<<endl;
    }       
 
    
}
