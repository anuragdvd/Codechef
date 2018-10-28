#include<iostream>
#define M 1000000007
#define fr(i,c,b) for(int i=c;i<b;i++)


using namespace std;

long int GCD(int a,int b)
{
    if(b==0)
        return a;
    else
        return GCD(b,a%b);
}

long long int pow(int prod,int result)
{
    if(result==0)
        return 1;
    else
    if(result%2==0)
        return(pow(prod*prod%M,result/2));
    else
        return(prod*pow(prod*prod%M,(result-1)/2))%M;
}

int main()
{
    int n;
    cin>>n;
    unsigned int a[n];
    unsigned int prod=1;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        prod=prod*a[i]%M;
    }

   long int result=a[0];
    for(unsigned int i=1;i<n;i++)
        result=GCD(result,a[i]);

    cout<<(pow(prod,result)%M);



}
