#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 

void solve(int test)
{
    int n, m ;
    cin >> n >> m ;
    int arr[n] ;
    for(int i=0; i<n ; i++)
    {
      cin >> arr[i] ;
    }
    sort(arr,arr+n) ;
    int i=0, j=n-1 ;
    double temp=0 ;
    double ans=0 ;
    while (true)
    {
      if(m==1)
      {
         break ;
      }

      ans+=double(arr[j]) ;
      j-- ;
      m-- ;
    }

    if(j%2==0)
    {
      ans+=double(arr[j/2]) ;
    }
    else
    {
      temp=double(arr[j/2]+arr[(j+1)/2]) ;
      temp/=2 ;
      ans+=temp ;
    }
    
    cout << "Case #" << test << ": " << fixed << setprecision(6) << ans << endl ;   ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t ;
    cin >> t ;
    for (int i=1; i<=t; i++)
    {
      solve(i) ;
    }

    return 0;
} 
