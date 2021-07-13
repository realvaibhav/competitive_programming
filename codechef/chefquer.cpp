    #include <bits/stdc++.h>
    using namespace std;
    typedef long long int ll ;
    #define endl "\n" 

    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        ll n , q  ;
        cin >> n >> q ;
        ll arr[n+1] ;
        ll type , l , r  , x , value , res=0 , ans=0 ;
        for(ll i=1 ; i<=n ; i++)
        {
            cin >> arr[i] ;
        }
        for(ll i=0 ; i<q ; i++)
        {
            cin >> type ;
            if(type==1)
            {
                cin >> l >> r >> x ;
                for(ll j=l ; j<=r ; j++)
                {
                    res=(x+j-l)  ;
                    arr[j]+=res*res    ;
                } 
            }
            if(type==2)
            {
                cin >> value ;
                ans = arr[value] ;
                cout << ans << "\n" ;
            }
            
        }


        return 0  ;
    }
