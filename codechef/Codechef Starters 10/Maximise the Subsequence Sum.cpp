#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000000
#define endl "\n" 
// for(int i=0 ; i<n ; i++)
// for(auto x : vec )
// vector<int> vec 
// set<int> s 

int solution()
{ 
   int n , k ;
   cin >> n >> k ;
   int arr[n] ;
   for(int i=0 ; i<n ; i++)
   {
      cin >> arr[i]  ;
   }
//    sort(arr,arr+n) ;
   int ans=0 , res=0 , sum=0    ;
   int temp=arr[0]  , count=0   ;
   for(int i=0 ; i<n ; i++)
   {
        if(arr[i]>0)
        {
            sum+=arr[i] ;
        }
   }
    sort(arr,arr+n) ;
    for(int i=0 ; i<n ; i++)
    {
        if(count<k && arr[i]<0)
        {
            arr[i]=abs(arr[i]) ;
            count++ ;
        }
    }
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]>0)
        {
            res+=arr[i] ;
        }
    }

    ans=max(sum,res) ;
    if(ans>0)
    {
        cout << ans << endl ;
    }
    else
    {
        cout << 0 << endl ;
    }

   
   return 0 ;
}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int t ;
   cin >> t ;
   for (int i = 0; i < t; i++)
   {
      solution() ;
   }


   return 0  ;
}
