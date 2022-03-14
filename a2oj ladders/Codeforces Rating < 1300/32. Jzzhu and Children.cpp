#include<bits/stdc++.h>
using namespace std  ;
typedef long long int ll ;
#define endl "\n"


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n , m ; 
    cin >> n >> m ;
    int arr[n] ;
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i] ;
    }
    int pos=0 ;
    double res=0,temp=0 ;

    for(int i=0 ; i<n ; i++)
    {
        temp=ceil((double)arr[i]/m) ;
        if(temp>=res)
        {
            pos=i ;
            res=temp ;
        }
    }
    
    cout << pos+1 << endl ;


    return 0 ;
}