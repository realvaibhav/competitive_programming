#include<bits/stdc++.h>
using namespace std  ;
typedef long long int ll ;
#define endl "\n"


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n ;
    cin >> n ;
    int arr[n] ;
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i] ;
    }
    int ans=INT_MAX ;
    int pos=0 ;
    for(int i=0 ; i<n ; i++)
    {
       if(arr[i]<ans)
       {
           pos=i ;
           ans=arr[i] ;
       }
    }
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]==ans && pos!=i)
        {
            cout << "Still Rozdil" << endl ;
            return 0 ;
        }
    }

    cout << pos+1 << endl ;

    return 0 ;
}