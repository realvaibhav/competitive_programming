#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll;
int solution(int i)
{
    ll n,k,s,time1=0,time2=0;
    cin >> n >> k >> s;
    time1=n+k;
    time2=n+2*k-2*s;
    if (time1>=time2)
    {
       cout << "Case " << "#" << i << ": " << time2 << "\n" ;
    }
    else
    {
       cout << "Case " << "#" << i << ": " << time1 << "\n" ;
    }
    
    
    return 0 ;
}
int main()
{
    int t ;
    cin >> t ;
    for (ll i = 1; i <=t; i++)
    {
        solution(i) ;
    }
    return 0;
}