#include<bits/stdc++.h>
#include<string.h>

#define M 1000000007

using namespace std;

long long pow(long long int a,long long int b)
{
    if(b==0)
        return 1;
    else
    if(b%2==0)
        return((a*a%M,b/2));
    else
        return(a*(a*a%M,(b-1)/2))%M;
}

int main()
{
    long long int a;
   long long int b=0;
    cin>>a;
    char s[1000000];
    gets(s);
    for(int i=0;i<strlen(s);i++)
    {
        b=(b*10+(s[i]-48))%(M-1);
    }
    cout<<pow(a,b);
}

