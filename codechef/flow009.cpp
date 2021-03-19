#include<bits/stdc++.h>
using namespace std ;

int main()
{
    
    int t ;
    cin >> t ;
    for (int i = 0; i < t; i++)
    {

       double quantity , price , ans=0 ;
       cin >> quantity >> price ;
       ans=(quantity*price) ;
       if (quantity>1000)
       {
           cout << fixed << setprecision(6) <<.9*ans << endl ;
       }
       else
       {
           cout << fixed << setprecision(6)<< ans << endl ;
       }     
        
    }
     
    return 0 ;
}