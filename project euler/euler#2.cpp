    #include<bits/stdc++.h>
    using namespace std ;
    typedef long long int ll ;
    int solution()
    {
        ll n , sum=0  , ans=2; 
        cin >> n ;
        ll a=1 ;
        ll b=2;
        while (a+b<=n)
            {
                sum=a+b ;
                a=b ;
                b=sum ;
                if (sum%2==0)
                {
                    ans=ans+sum ;
                }
            }
        cout << ans << "\n" ;

        return 0;
    }

    int main()
    {
    ll t;
        cin >> t ;
        for (ll i = 0 ; i < t ; i++ )
        {
        solution() ;
        }
        
        return 0; 

    }