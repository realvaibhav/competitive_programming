   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 


   ll BinarySearch2(ll arr[] , ll l , ll r , ll x)   // for last index of x 
{
    ll ans=-1 ;
    while(l<=r)
    {
        ll mid=(l+r)/2  ;
        if(x==arr[mid])
        {
            ans=mid ;  // here don't return mid value 
            l=mid+1 ;   // keep checking for upper indexes
        }
        else if(x>arr[mid])
        {
            l=mid+1 ;
        }
        else
        {
            r=mid-1 ;
        }
    }

    return ans  ;
}


ll BinarySearch1(ll arr[] , ll l , ll r , ll x)   // for first index of x 
{
    ll ans=-1 ;
    while(l<=r)
    {
        ll mid=(l+r)/2  ;
        if(x==arr[mid])
        {
            ans=mid ;  // here don't return mid values 
            r=mid-1 ;  // keep checking for lower indexes
        }
        else if(x>arr[mid])
        {
            l=mid+1 ;
        }
        else
        {
            r=mid-1 ;
        }
    }

    return ans  ;
}


   ll solution()
   { 
      ll n ;
      cin >> n ;
      ll arr[n] ;
      for(ll i=0 ; i<n ; i++)
      {
         cin >> arr[i]  ;
      }
      sort(arr,arr+n) ;
      ll ans=0 ;
      for(ll i=0 ; i<n ; i++)
      {
         ll x=arr[i]  ;
         ll first_index = BinarySearch1( arr , 0 , n-1 , x )  ;
         ll last_index = BinarySearch2( arr , 0 , n-1 , x )   ;
         ll count=(last_index-first_index)+1  ;
         ans+=(n-count)  ;
      }

      cout << ans << endl ;


      return 0  ;
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