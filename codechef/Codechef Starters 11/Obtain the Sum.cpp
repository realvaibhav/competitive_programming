    #include<bits/stdc++.h>
    using namespace std ;
    typedef long long int ll ;
    #define MAX 1000000000
    #define endl "\n" 
    // for(int i=0 ; i<n ; i++)
    // for(auto x : vec )
    // vector<int> vec 
    // set<int> s 

    ll solution()
    { 
    ll n , sum  ;
    cin >> n  >> sum  ;
    ll res=n*(n+1) ;
    res=res/2 ;

    if(sum>(res-1))
    {
        cout << "-1" << endl ;
    }
    else
    {
        ll x=res-sum ;
        if( x>=1 && x<=n )
        {
            cout << x << endl ;
        }
        else
        {
            cout << "-1" << endl ;
        }
    }
    

    
    return 0 ;
    }


    int main()
    {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t ;
    cin >> t ;
    for (ll i = 0; i < t; i++)
    {
        solution() ;
    }


    return 0  ;
    }