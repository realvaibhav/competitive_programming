
                //  Kadane Algorithm

#include<bits/stdc++.h>
using namespace std  ;

int main()
{
    int n ;
    cin >> n ;
    int arr[n] ;
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i] ;
    }
    int sum=0 ;
    int ans=arr[0] ;
    for(int i=0 ; i<n ; i++)
    {
        sum+=arr[i] ;
        ans=max(ans,sum) ;
        if(sum<0)
        {
            sum=0 ;
        }
    }

    cout << ans << endl ;   // this will print maximum  sum of a subarray in this array 

    


    return 0 ;
}