#include<bits/stdc++.h>
using namespace std  ;
typedef long long int ll ;
#define endl "\n"


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n ;
    cin >> n  ;
    int arr[7] ;
    for(int i=0 ; i<7 ; i++)
    {
        cin >> arr[i] ;
    }
    int sum=0 ;
    int pos=0 ;
    int i=0 ;
    while(true)
    {
        if(i>6)
        {
            i=0 ;
        }

        sum+=arr[i] ;
        
        if(sum>=n)
        {
            pos=i+1 ;
            break ;
        }

        i++ ;
    }
    
    cout << pos << endl ;
    


    return 0 ;
}