#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll dp[1000001] = {0};
ll x, y, i, j;

void sieve()
{
    bool prime[1000001];    
    memset(prime, true, sizeof(prime));
    for (i = 2; i * i <= 1000000; i++)
    {
        if (prime[i])
        {
            for (j = i * 2; j <= 1000000; j += i)
            {
                prime[j] = false;
            }
        }
    }

    for (i = 2; i <= 1000000; i++)
    {
        dp[i] = prime[i] ? dp[i - 1] + 1 : dp[i - 1];
    }
}

void solve()
{
    scanf("%lld%lld",&x,&y);
    if(dp[x]>y)
    {
        printf("Divyam\n");
    }
    else
    {
        printf("Chef\n");
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sieve();
    ll test;
    for (scanf("%lld",&test); test--;)
    {
        solve();
    }
}
