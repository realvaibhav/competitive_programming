#include<bits/stdc++.h>
using namespace std  ;
typedef long long int ll ;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n ;
    cin >> n ;
    int arr1[n] , arr2[n] ;
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr1[i] >> arr2[i]  ;
    }
    int l1=0 , l2=0 , r1=0 , r2=0 ;
    for(int i=0 ; i<n ; i++)
    {
        // for left door
        if(arr1[i]==0)
        {
            l1++ ;
        }
        else
        {
            l2++ ;
        }
    }
    for(int i=0 ; i<n ; i++)
    {
        // for right door
        if(arr2[i]==0)
        {
            r1++ ;
        }
        else
        {
            r2++ ;
        } 
    }

    cout << min(l1,l2) + min(r1,r2) << endl  ;


    return 0 ;
}