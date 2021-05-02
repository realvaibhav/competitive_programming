    #include<bits/stdc++.h>
    using namespace std ;
    typedef long long int ll ;
    #define MAX 1000000000
    #define endl "\n" 

    int main()
    {
    ll m=1000000007 ;
    ll n , sum=0 , qr , ans=0 ;
    cin >> n ;
    ll arr[n] ;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i] ;

        sum=((sum%m)+(arr[i]%m))%m ;
    } 
    if (sum<0)
    {
        ans=sum+m ;
    }
    
    cin >> qr ;
    ll qrr[qr] ;    
    for (ll i = 0; i < qr; i++)
    {
        cin >> qrr[i] ;
        ans=(ans*2)%m ;

        cout << ans << endl ;
    }
    
        return 0;
    }