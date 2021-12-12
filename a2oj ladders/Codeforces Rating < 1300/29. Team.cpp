#include<bits/stdc++.h>
using namespace std  ;
typedef long long int ll ;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n ;
    cin >> n ;
    int a , b , c  , count=0  ;
    for(int i=0 ; i<n ; i++)
    {
        cin >> a >> b >> c ;
        if(a==1 && b==1)
        {
            count++ ;
        } 
        else if(a==1 && c==1)
        {
            count++ ;
        }
        else if(b==1 && c==1)
        {
            count++ ;
        }
    }
     
    cout << count << endl ; 
    
    

    return 0 ;
}