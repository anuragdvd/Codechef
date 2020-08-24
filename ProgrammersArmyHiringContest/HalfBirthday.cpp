/* Problem Link :: https://www.codechef.com/PAHC2020/problems/HALFBDAY

Problem Description ::
Chef will not be able to attend the birthday of his best friend Rock. He promised Rock that this will not be the case on his half birthday. To keep his promise Chef must know Rock’s next half birthday accurately. Being busy, he is assigning this work to you.

Half birthday is the day that occurs exactly between two subsequent birthdays. You will be provided with Rock’s birthdate and birth month, you will have to figure out his half birthday.

Note: Consider every year to be a leap year and all months are displayed in lowercase English characters.

   Tags: Implementation based problem  
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

string ss[]={"january","february","march","april","may","june","july","august","september","october","november","december"};

int main()
{
    si(t);
    int days[13] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    while(t--)
    {
        si(d); string month; cin>>month;
        int mm;
        if(month=="january") mm=1;
        if(month=="february") mm=2;
        if(month=="march") mm=3;
        if(month=="april") mm=4;
        if(month=="may") mm=5;
        if(month=="june") mm=6;
        if(month=="july") mm=7;
        if(month=="august") mm=8;
        if(month=="september") mm=9;
        if(month=="october") mm=10;
        if(month=="november") mm=11;
        if(month=="december") mm=12;
        int offset=d;
        for(int i=mm-1;i>0;i--)
             offset+=days[i];
       // watch(offset);
        int rem=366-offset;
        bool y2=false;
        int offset2; 
        if (183 <= rem) 
        { 
            y2 = true; 
            offset2 = offset + 183; 
        } 
        else
        {
            int temp=183-rem;
            y2=false;
            int y2d=366;
            while (temp >= y2d) 
            { 
                temp -= y2d; 
                y2d = 366; 
            } 
            offset2 = temp; 
        }
        int d2,m2;
        int i;
        for (i = 1; i <= 12; i++) 
        { 
            if (offset2 <= days[i]) 
                break; 
            offset2 = offset2 - days[i]; 
        } 
        d2=offset2;
        
        string ans;
        cout<<d2<<" "<<ss[i-1]<<endl;
    }
    
}
